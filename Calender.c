#include<stdio.h>
#include<stdlib.h>
    const char *month_names[]={"January","Febraury","March","April","May","June","July","August","September","October","November","December"};
    int days_in_month[]={31,28,31,30,31,30,31,31,30,31,30,31};
    int is_leap_year(int year){
        return (year%4==0&&(year%100!=0||year%400==0));
    }
    int calculate_day_of_week(int day,int month,int year){
        if(month<3){
            month+=12;
            year--;
        }
        int k=year%100;
        int j=year/100;
        int day_of_week=(day+(13*(month+1))/5+k+k/4+j/4+5*j)%7;
        return day_of_week;
    }
    void print_calendar(int month,int year) {
        if(is_leap_year(year)){
            days_in_month[1]=29;
        }
        printf("\n %s %d\n",month_names[month-1],year);
        printf("S M T W T F S\n");
        int first_day_of_week=calculate_day_of_week(1,month,year);
        int i;
        for (i=0;i<first_day_of_week;i++){
            printf("   ");
        }
            for(i=1;i<=days_in_month[month-1];i++){
                printf("%2d",i);
                if((first_day_of_week+i)%7==0){
                    printf("\n");
                }
            }
            printf("\n");
        }
        int main(){
            int month,year;
            printf("Enter month(1-12):");
            scanf("%d",&month);
            printf("Enter year:");
            scanf("%d",&year);
            print_calendar(month,year);
            return 0;
        }
    