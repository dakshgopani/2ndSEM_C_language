// WAP to scan and print 2 dimensional matrix using arrays
#include <stdio.h>
void main()
{
    int a[2][2], i, j;
    printf("Enter elements : \n");
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            printf("Enter a %d%d : ", i + 1, j + 1);
            scanf("%d", &a[i][j]);
        }
    }
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            printf("\na%d%d : %d", i + 1, j + 1, a[i][j]);
        }
    }
}
//done