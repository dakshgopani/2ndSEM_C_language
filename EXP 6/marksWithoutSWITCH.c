#include <stdio.h>
void main()
{
    int n;
    printf("Enter your marks : ");
    scanf("%d", &n);
    if (n < 100 && n > 80)
    {
        printf("A+");
    }
    else if (n <= 80 && n > 60)
    {
        printf("B");
    }
}