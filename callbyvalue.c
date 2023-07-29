//. Write a program in C to swap two numbers using a function (Call by value and call by reference method).
#include <stdio.h>
void swap(int a, int b);
void swap(int a, int b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
}
void main()
{
    int num1, num2;
    printf("Enter first number : ");
    scanf("%d", &num1);
    printf("Enter second number : ");
    scanf("%d", &num2);
    printf("Before Swap,value of a : %d\n", num1);
    printf("Before Swap,value of b : %d\n", num2);
    swap(num1, num2);
    printf("After swap,value of a : %d\n", num1);
    printf("After Swap,value of b : %d\n", num2);
}