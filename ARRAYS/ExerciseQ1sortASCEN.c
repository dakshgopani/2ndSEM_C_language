//Wap to sort the numbers in ascending order using arrays
#include <stdio.h>
void main()
{
    int c,n;
    printf("How many elements you want to enter : ");
    scanf("%d", &n);
    int arr1[50];
    for (int i = 0; i < n; i++)
    {
        printf("Enter %d element out of %d : ", i + 1, n);
        scanf("%d", &arr1[i]);
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr1[i] > arr1[j])
            {
                c = arr1[i];
                arr1[i] = arr1[j];
                arr1[j] = c;
            }
        }
    }
    printf("\nSorted Array : \n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr1[i]);
    }
}
