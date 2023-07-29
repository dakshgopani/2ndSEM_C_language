// WAP to find the determinant of 2by2 order using arrays
#include <stdio.h>
void main()
{
    int arr[2][2];
    printf("Enter the elements of 2by2 matrix : \n");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("Enter a%d%d : ", i + 1, j + 1);
            scanf("%d", &arr[i][j]);
        }
    }
    printf("Determinant of the matrix is : \n");
    int det = arr[0][0] * arr[1][1] - arr[0][1] * arr[1][0];
    printf("%d", det);
}