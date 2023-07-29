// calculate the sum of numbers from 1 to n using recursion
#include <stdio.h>
int sum(int num);
int sum(int num)
{
    if (num != 0)
        return num + sum(num - 1);
    else
        return num;
}
void main()
{
    int number, result;
    printf("Enter a positive integer : ");
    scanf("%d", &number);
    result = sum(number);
    printf("Sum of numbers from 1 to %d = %d", number, result);
}