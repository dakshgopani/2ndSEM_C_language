// search a number from a list using the function
#include <stdio.h>
int search(int arr[], int n, int x)
{
    int i;
    for (i = 0; i < n; i++)
    {
        if (arr[i] == x)
            return i;
    }
    return -1;
}

void main()
{
    int n, x, i;
    printf("Enter the number of elements in a list : ");
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        printf("Enter element %d : ", i + 1);
        scanf("%d", &arr[i]);
    }
    printf("Enter the number to search : ");
    scanf("%d", &x);
    int index = search(arr, n, x);
    if (index == -1)
        printf("%d is not present in the list ", x);
    else
        printf("%d is present at index %d", x, index);
}