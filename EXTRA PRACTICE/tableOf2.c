#include<stdio.h>
void main()
{
    int n;
    int result;
    printf("Enter any number whose table you want to print : ");
    scanf("%d",&n);
    for(int i=1;i<=10;i++) {
        result = n*i;
        printf("%d * %d = %d\n",n,i,result);
    }
}
