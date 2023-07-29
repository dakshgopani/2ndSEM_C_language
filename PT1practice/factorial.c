#include<stdio.h>
void main()
{
    int a;
    printf("enter a number : ");
    scanf("%d",&a);
    int fact=1;
    for(int i=1;i<=a;i++) {
        fact = fact * i;
    }
    printf("Factorial of %d is %d",a,fact);
}
