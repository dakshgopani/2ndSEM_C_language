//sum of all odd numbers from 1 to 30
#include<stdio.h>
void main()
{
    int i,sum=0;
    for(int i=1;i<=30;i++) {
        if(i % 2 == 1) {
            sum=sum+i;
        }
    }
    printf("Sum of all odd numbers from 1 to 30 is %d ",sum);
}
