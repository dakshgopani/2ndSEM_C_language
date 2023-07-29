#include <stdio.h>
void main()
{
    int arr[100], num, i, input, flag;
    printf("How many numbers you want to enter : ");
    scanf("%d", &num);
    for (int i = 0; i < num; i++)
    {
        printf("Enter number %d : ", i + 1);
        scanf("%d", &arr[i]);
    }
    printf("Enter the number you want to search : ");
    scanf("%d", &input);
    for (int i = 0; i < num; i++)
    {
        if (input == arr[i])
        {
            flag = 1;
            break;
        }
    }
    if (flag == 1)
        printf("The number is found at index %d", i);
    else
        printf("The number is not found");
}