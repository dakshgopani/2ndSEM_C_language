#include <stdio.h>
void main()
{
    int a[2][2], b[2][2], c[2][2], i, j;
    printf("MATRIX 1\n");
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            printf("Enter a%d%d : ", i + 1, j + 1);
            scanf("%d", &a[i][j]);
        }
    }
    printf("MATRIX 2\n");
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            printf("Enter b%d%d : ", i + 1, j + 1);
            scanf("%d", &b[i][j]);
        }
    }
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            c[i][j] = a[i][j] + b[i][j];
        }
    }
    printf("Addition of 2 matrix of 2by2 order is \n");
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            printf("%d\n", c[i][j]);
        }
    }
}