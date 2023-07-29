#include<stdio.h>
void main()
{
    int m[3][3];
    int n[3][3];
    int i,j;
    int sum[3][3];
    printf("Enter the number in the matrix : ");
    for(i=0;i<3;i++) {
        for(j=0;j<3;j++) {
            scanf("%d",&m[i][j]);
        }
    }

    printf("Enter the number in the matrix : ");
    for(i=0;i<3;i++) {
        for(j=0;j<3;j++) {
            scanf("%d",&n[i][j]);
        }
    }

        for(i=0;i<3;i++) {
        for(j=0;j<3;j++) {
            sum[i][j] = m[i][j] + n[i][j];
        }
    }

    printf("Addition  of the 2 matrix : \n");
    for(i=0;i<3;i++) {
        for(j=0;j<3;j++) {
            printf("%d",sum[i][j]);
        }
        printf("\n");
    }
}
