#include<stdio.h>
void main()
{
    int a[3][3],b[3][3],i,j,sum;
    printf("Matrix 1 \n");
    for(i=0;i<3;i++) {
        for(j=0;j<3;j++) {
            printf("Enter element a%d%d : ",i+1,j+1);
            scanf("%d",&a[i][j]);
        }
    }
    printf("Matrix 2\n");
    for(i=0;i<3;i++) {
        for(j=0;j<3;j++) {
            printf("Enter element b%d%d : ",i+1,j+1);
            scanf("%d",&b[i][j]);
        }
    }
    printf("Addition of 2 matrices is \n");
    for(i=0;i<3;i++) {
        for(j=0;j<3;j++) {
            sum = a[i][j] + b[i][j];
            printf("%d\n",sum);
        }
    }
}
