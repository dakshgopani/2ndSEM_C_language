#include<stdio.h>
void main()
{
    int a,b,c;
    printf("Enter 1st number : ");
    scanf("%d",&a);
    printf("Enter 2nd number : ");
    scanf("%d",&b);
    c = a;
    a = b;
    b = c;
    printf("Reversed 1st number is : %d\n",a);
    printf("Reversed 2nd number is : %d",b);
}
