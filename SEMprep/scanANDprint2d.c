#include <stdio.h>
void main()
{
    int arr[2][2];
    printf("Enter elements : \n");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("Enter a%d%d : ", i + 1, j + 1);
            scanf("%d", &arr[i][j]);
        }
    }
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("\na%d%d : %d", i + 1, j + 1, arr[i][j]);
        }
    }
}