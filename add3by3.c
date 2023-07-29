// Write a program in C to Add 2 matrices of 3*3/2*2 order using Arrays.
#include <stdio.h>
void main()
{
    int a[3][3], b[3][3], c[3][3], i, j;
    printf("MATRIX 1\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("Enter a %d%d : ", i + 1, j + 1);
            scanf("%d", &a[i][j]);
        }
    }
    printf("MATRIX 2\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("Enter b %d%d : ", i + 1, j + 1);
            scanf("%d", &b[i][j]);
        }
    }
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            c[i][j] = a[i][j] + b[i][j];
        }
    }
    printf("Addition of 2 matrix of 3by3 order is \n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d\n", c[i][j]);
        }
    }
}