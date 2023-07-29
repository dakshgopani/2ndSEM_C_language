// Write a program in C to search the elements using Arrays
#include <stdio.h>
void main()
{
    int num, i;
    printf("How many numbers you want to enter : ");
    scanf("%d", &num);
    int arr[100];
    for ( i = 0; i < num; i++)
    {
        printf("Enter number %d : ", i + 1);
        scanf("%d", &arr[i]);
    }
    int input;
    int boolean;
    printf("Enter the number you want to search : ");
    scanf("%d", &input);
    for ( i = 0; i < num; i++)
    {
        if (input == arr[i])
        {
            boolean = 1;
            break;
        }
    }
    if (boolean == 1)
    {
        printf("The number is found at index %d", i);
    }
    else
        printf("The number is not found");
}