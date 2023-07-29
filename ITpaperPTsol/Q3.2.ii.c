#include<stdio.h>
void main()
{
    int sum=0,i=1;
    do{
        if(i%2==1) {
            sum = sum + i;
        }
        i++;
    }
    while(i<=20);
    printf("%d",sum);
}
