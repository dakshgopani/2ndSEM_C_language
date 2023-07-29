#include<stdio.h>
void add(int a,int b);
void add(int a,int b)
{
    int c = a + b;
    printf("%d",c);
}
void main()
{
     int a, b;
    printf("Enter 1st number : ");
    scanf("%d", &a);
    printf("Enter 2nd number : ");
    scanf("%d", &b);
    //c = a + b;
    add(a,b);
}