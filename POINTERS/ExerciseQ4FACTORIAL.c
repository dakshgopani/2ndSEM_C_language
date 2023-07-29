#include <stdio.h>

void calculateFactorial(int num, unsigned long long *result)
{
    *result = 1;
    int i;
    for (int i = 1; i <= num; i++)
    {
        *result *= i;
    }
}

int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    unsigned long long factorial;
    calculateFactorial(num, &factorial);

    printf("Factorial of %d = %llu\n", num, factorial);

    return 0;
}
