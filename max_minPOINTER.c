// Write a program in C to find the maximum/minimum number between two numbers using a pointer.
#include <stdio.h>
int maxNumber(int *a, int *b)
{
    if (*a > *b)
        return *a;
    else
        return *b;
}
void main()
{
    int num1, num2;
    printf("Enter 1st number : ");
    scanf("%d", &num1);
    printf("Enter 2nd number : ");
    scanf("%d", &num2);
    int number = maxNumber(&num1, &num2);
    printf("The maximum number is %d", number);
}