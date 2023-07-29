// WAP to add 2 matrices of 3by3 order using arrays
#include <stdio.h>
int main()
{
    int matrix1[3][3], matrix2[3][3], result[3][3];

    // input elements of the first matrix
    printf("Matrix 1 \n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("Enter a%d%d : ",i+1,j+1);
            scanf("%d", &matrix1[i][j]);
        }
    }

    // input elements of the second matrix
    printf("Matrix 2\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("Enter b%d%d : ",i+1,j+1);
            scanf("%d", &matrix2[i][j]);
        }
    }

    // add the two matrices
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            result[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }

    // display the result matrix
    printf("Addition of 2 matrix of 3 by 3 order is \n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d \n", result[i][j]);
        }
        
    }
    return 0;
}
//done
