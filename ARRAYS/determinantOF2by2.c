#include <stdio.h>
void main()
{
    int a[2][2], i, j, det1;
    printf("Matrix 1 \n");
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            printf("Enter element a%d%d : ", i + 1, j + 1);
            scanf("%d", &a[i][j]);
        }
    }
    printf("Determinant of the 2by2 Matrice is \n");
    det1 = a[0][0] * a[1][1] - a[0][1] * a[1][0];
    printf("%d\n", det1);
}
