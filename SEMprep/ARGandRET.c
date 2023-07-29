#include <stdio.h>
int add(int a, int b);
int add(int a, int b)
{
    int c = a + b;
    return c;
}
void main()
{
    int a, b, c;
    printf("Enter 1st number : ");
    scanf("%d", &a);
    printf("Enter 2nd number : ");
    scanf("%d", &b);
    // c = a + b;
    int ans = add(a, b);
    printf("%d", ans);
}