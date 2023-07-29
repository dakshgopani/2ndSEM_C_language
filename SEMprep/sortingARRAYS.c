#include <stdio.h>
void main()
{
    int input;
    printf("How many elements you want to enter : ");
    scanf("%d", &input);
    int arr[100];
    for (int i = 0; i < input; i++)
    {
        printf("Enter element %d out of %d", i + 1, input);
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < input; i++)
    {
        for (int j = i + 1; j < input; j++)
        {
            if (arr[i] > arr[j])
            {
                int c;
                c = arr[i];
                arr[i] = arr[j];
                arr[j] = c;
            }
        }
    }
    printf("\nsorted array\n");
    for (int i = 0; i < input; i++)
    {
        printf("%d ", arr[i]);
    }
}