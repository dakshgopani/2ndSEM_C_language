#include<stdio.h>
void main()
{
    int i,value[5],j;
    for(i=0;i<5;i++) {
        printf("Enter 5 values : \n");
        scanf("%d",&value[i]);
        j=value[i] + 5;
        printf("The value of %d + 5 = %d\n",value[i],j);
    }
}
