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
    printf("Enter 1st number : ");
    scanf("%d",&num1);
    printf("Enter 2nd number : ");
    scanf("%d",&num2);
    printf("Before swap,value of a : %d\n",num1);
    printf("Before swap,value of b : %d\n",num2);
    swap(num1,num2);
    
}
