//print fibonacci series using recursion
#include <stdio.h>
int fibo(int n);
int fibo(int n)
{
    if (n == 0 || n == 1)
        return n;
    else
        return fibo(n - 1) + fibo(n - 2);
}
void main()
{
    int input;
    printf("Enter a range till you want to print the series : ");
    scanf("%d", &input);
    for (int i = 0; i < input; i++)
    {
        printf("%d ", fibo(i));
    }
}
//done