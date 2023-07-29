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
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - i - 1; j++)
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
        printf("Enter %d out of %d : ", i + 1, size);
        scanf("%d", &arr[i]);
    }
    printf("ORIGINAL array\n");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    sortARRAY(arr, size);
    printf("\nsorted array\n");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
}