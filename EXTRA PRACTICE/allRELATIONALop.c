#include<stdio.h>
void main()
{
    int num1,num2,num3;
    printf("Enter 1st number : ");
    scanf("%d",&num1);
    printf("Enter 2nd number : ");
    scanf("%d",&num2);
    printf("Enter 3rd number : ");
    scanf("%d",&num3);
    if(num1>num2) {
        if(num1>num3) {
            printf("Num1 %d",num1);
        }
        else {
            printf("Num3 %d",num3);
        }
    }
    else if(num2>num3) {
        printf("Num2 %d",num2);
    }
    else {
        printf("Num3 %d",num3);
    }
}
