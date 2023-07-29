//call by reference
#include <stdio.h>
void swap(int *x, int *y);
void swap(int *x, int *y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}
void main()
{
    int num1, num2;
    printf("Enter 1st number : ");
    scanf("%d", &num1);
    printf("Enter 2nd number : ");
    scanf("%d", &num2);
    printf("Before Swap, value of a : %d\n", num1);
    printf("Before Swap, value of b : %d\n", num2);
    swap(&num1, &num2);
    printf("After Swap, value of a : %d\n", num1);
    printf("After Swap, value of b : %d\n", num2);
}
//done
