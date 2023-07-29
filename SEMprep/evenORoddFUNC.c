#include <stdio.h>
void evenOdd(int num);
void evenOdd(int num)
{
    if (num % 2 == 0)
        printf("%d is even number", num);
    else
        printf("%d is an odd number", num);
}
void main()
{
    int num;
    printf("Enter a number : ");
    scanf("%d",&num);
    evenOdd(num);
}