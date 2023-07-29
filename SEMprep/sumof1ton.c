#include<stdio.h>
int sum(int n);
int sum(int n)
{
    if(n!=0)
    return n + sum(n-1);
    else 
    return n;
}
void main()
{
    int number;
    printf("Enter a integer : ");
    scanf("%d",&number);
    int result = sum(number);
    printf("Sum of numbers from 1 to %d is %d",number,result);
}