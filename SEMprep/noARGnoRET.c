#include <stdio.h>
void add();
void add()
{
    int a, b, c;
    printf("Enter 1st number : ");
    scanf("%d", &a);
    printf("Enter 2nd number : ");
    scanf("%d", &b);
    c = a + b;
    printf("Addition of %d and %d is %d", a, b, c);
}
void main()
{
    add();
}
