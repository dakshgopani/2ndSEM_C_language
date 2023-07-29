#include <stdio.h>
int maxNumber(int *num1, int *num2)
{
    if (*num1 > *num2)
        return *num1;
    else
        return *num2;
}
void main()
{
    int num1, num2;
    printf("Enter 1st number : ");
    scanf("%d", &num1);
    printf("Enter 2nd number : ");
    scanf("%d", &num2);
    int max = maxNumber(&num1, &num2);
    printf("Maximum number is %d", max);
}