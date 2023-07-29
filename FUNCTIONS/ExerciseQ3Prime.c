#include <stdio.h>
int primeF(int num);
int primeF(int num)
{
    int i, flag = 0;
    for (i = 2; i <= num / 2; i++)
    {
        if (num % i == 0)
        {
            flag = 1;
            break;
        }
    }
    if (flag == 1)
    {
        printf("%d is not a prime number", num);
    }
    else
    {
        printf("%d is a prime number", num);
    }
    return num;
}
void main()
{
    int input;
    printf("Enter a number : ");
    scanf("%d", &input);
    primeF(input);
}
//done