// table of any number
#include <stdio.h>
void main()
{
    int num;
    printf("Enter a number : ");
    scanf("%d", &num);
    int newTerm;
    for (int i = 1; i <= 10; i++)
    {
        newTerm = i * num;
        printf("%d * %d is %d \n", num, i, newTerm);
    }
}
