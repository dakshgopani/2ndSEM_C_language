//working of arithmetic operators
#include<stdio.h>
void main()
{
    int a,b,c;
    printf("Enter a : ");
    scanf("%d",&a);
    printf("Enter b : ");
    scanf("%d",&b);
    c = a + b;
    printf("%d + %d is % d\n",a,b,c);
    c = a - b;
    printf("%d - %d is % d\n",a,b,c);
    c = a * b;
    printf("%d * %d is % d\n",a,b,c);
    c = a / b;
    printf("%d / %d is % d\n",a,b,c);
    c = a % b;
    printf("%d when divided by %d the remainder is % d",a,b,c);
}
