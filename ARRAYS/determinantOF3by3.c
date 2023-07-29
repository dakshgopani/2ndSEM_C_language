#include<stdio.h>
void main()
{
    int a[3][3],i,j,ogdet,det1,det2,det3;
    printf("Matrix 1 \n");
    for(i=0;i<3;i++) {
        for(j=0;j<3;j++) {
            printf("Enter element a%d%d : ",i+1,j+1);
            scanf("%d",&a[i][j]);
        }
    }
    printf("Determinant of the 3by3 Matrice is \n");
    det1 = a[0][0] * (a[1][1] * a[2][2] - a[1][2] * a[2][1]);
    det2 = a[0][1] * (a[1][0] * a[2][2] - a[1][2] * a[2][0]);
    det3 = a[0][2] * (a[1][0] * a[2][1] - a[1][1] * a[2][0]);
    ogdet = det1 - det2 + det3;
    printf("%d\n",ogdet);
}
