#include<stdio.h>
void main()
{
    int n;
    int result;
    printf("Enter any number whose table you want to print : ");
    scanf("%d",&n);
    int i=1;
    while(i<=10) {
        result = n*i;
        printf("%d * %d = %d\n",n,i,result);
        i++;
    }
}
