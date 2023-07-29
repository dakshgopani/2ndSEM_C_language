#include<stdio.h>
void main()
{
    int n;
    printf("Enter any number : ");
    scanf("%d",&n);
    int i=1,result;
    do  {
        result = n*i;
        printf("%d * %d = %d\n",n,i,result);
        i++;
    }
    while(i<=10);
}
