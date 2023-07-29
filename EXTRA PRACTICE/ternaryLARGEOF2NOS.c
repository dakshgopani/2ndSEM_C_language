#include<stdio.h>
void main()
{
    int num1,num2;
    printf("Enter 1st number : ");
    scanf("%d",&num1);
    printf("Enter 2nd number : ");
    scanf("%d",&num2);
    (num1>num2) ? printf("NUM1 %d",num1) : printf("NUM2 %d",num2);
}

