// Write a program to print the first 50 natural numbers using recursion
#include <stdio.h>

void print_numbers(int n)
{
    if (n > 0)
    {
        print_numbers(n - 1);
        printf("%d ", n);
    }
}

int main()
{
    int n = 50;
    print_numbers(n);
    return 0;
}