// Write a program in C to scan and print 2 dimensional matrix using Arrays
#include <stdio.h>
void main()
{
    int arr[2][2], i, j;
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("Enter a%d%d : ", i + 1, j + 1);
            scanf("%d", &arr[i][j]);
        }
    }
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            printf("\na%d%d : %d", i + 1, j + 1, arr[i][j]);
        }
    }
}