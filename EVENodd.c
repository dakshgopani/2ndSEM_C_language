// Write a program in C to check if a given number is even or odd using the function.
#include <stdio.h>
void oddEVEN(int a);
void oddEVEN(int a)
{
    if (a % 2 == 0)
        printf("%d is an even number ", a);
    else
        printf("%d is an odd number ", a);
}
void main()
{
    int num;
    printf("Enter any number : ");
    scanf("%d", &num);
    oddEVEN(num);
}