// Write a program in C to sort an array using a pointer
#include <stdio.h>
void swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
void sortARRAY(int *arr, int size)
{
    int i, j;
    for (i = 0; i < size - 1; i++)
    {
        for (j = 0; j < size - i - 1; j++)
        {
            if (*(arr + j) > *(arr + j + 1))
            {
                swap(arr + j, arr + j + 1);
            }
        }
    }
}
void main()
{
    int size;
    printf("Enter the size of the array : ");
    scanf("%d", &size);
    int arr[size];
    for (int i = 0; i < size; i++)
    {
        printf("Enter %d integer out of %d : ",i+1,size);
        scanf("%d", &arr[i]);
    }
    printf("ORIGINAL ARRAY\n");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    sortARRAY(arr, size);
    printf("\nSORTED ARRAY\n");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
}