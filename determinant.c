// Write a program in C to find the determinant of 2*2 order using Arrays
#include <stdio.h>
void main()
{
    int a[2][2];
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("Enter a%d%d : ", i + 1, j + 1);
            scanf("%d", &a[i][j]);
        }
    }
    int det = a[0][0] * a[1][1] - a[0][1] * a[1][0];
    printf("Determinant of the matrix is : \n");
    printf("%d", det);
}