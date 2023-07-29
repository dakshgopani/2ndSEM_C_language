#include <stdio.h>
int add();
int add()
{
    int a, b, c;
    printf("Enter 1st Number : ");
    scanf("%d", &a);
    printf("Enter 2nd Number : ");
    scanf("%d", &b);
    c = a + b;
    return c;
}
void main()
{
    int n;
    n = add();
    printf("%d", n);
}