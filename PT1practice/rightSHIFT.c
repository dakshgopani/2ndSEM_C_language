#include<stdio.h>
void main()
{
    int num=212,i;
    for(i=0;i<=2;i++) {
        printf("Right shift by %d is %d \n",i,num>>i);
    }
}
