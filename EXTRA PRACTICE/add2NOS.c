#include<stdio.h>
void main()
{
    int num1,num2;
    printf("Enter 1st number : ");
    scanf("%d",&num1);
    printf("Enter 2nd number : ");
    scanf("%d",&num2);
    int ans = num1 + num2;
    printf("Addition of %d and %d is %d",num1,num2,ans);
}
