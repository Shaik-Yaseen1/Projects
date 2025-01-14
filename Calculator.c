#include<stdio.h>
int main() {
    int a;
    int b;
    int operation;
    printf("Enter a number:");
    scanf("%d",&a);
    printf("Enter b number:");
    scanf("%d",&b);
    printf("\n");
    printf("Press 1 for Addition\n");
    printf("Press 2 for Subtraction\n");
    printf("Press 3 for Multiplication\n");
    printf("Press 4 for Division\n");
     printf("\n");
    printf("Enter operation:\n");
    scanf("%d",&operation);
    switch (operation) {
        case 1:
        printf("Addition of a+b:%d",a+b);
        break;
        case 2:
        printf("Subtraction of a-b:%d",a-b);
        break;
        case 3:
        printf("Multiplication of a*b:%d",a*b);
        break;
        case 4:
        printf("Division of a/b:%d",a/b);
        break;
}
    
}