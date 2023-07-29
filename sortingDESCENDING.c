//Write a program in C to sort the numbers in Ascending/Descending order using Arrays.
#include <stdio.h>
void main()
{
    int num;
    
    printf("How many numbers you want to enter : ");
    scanf("%d", &num);
    int arr1[100];
    for (int i = 0; i < num; i++)
    {
        printf("Enter %d element out of %d : ", i + 1, num);
        scanf("%d", &arr1[i]);
    }
    for (int i = 0; i < num; i++)
    {
        for (int j = i + 1; j < num; j++)
        {
            if (arr1[i] < arr1[j])
            {
                int temp;
                temp = arr1[i];
                arr1[i] = arr1[j];
                arr1[j] = temp;
            }
        }
    }
    printf("\nSORTED ARRAY\n");
    for (int i = 0; i < num; i++)
    {
        printf("%d ", arr1[i]);
    }
}