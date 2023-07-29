#include <stdio.h>
int add();
int add()
{
    int a, b, c;
    //  int a, b, c;
    printf("Enter 1st number : ");
    scanf("%d", &a);
    printf("Enter 2nd number : ");
    scanf("%d", &b);
    c = a + b;
    return c;
}
void main()
{
    int ans = add();
    printf("%d", ans);
}