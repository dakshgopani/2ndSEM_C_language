#include<stdio.h>
int fact(int n);
int fact(int n)
{
    if(n==0)
    return 1;
    else
    return n * fact(n-1);
}
void main()
{
    int num;
    printf("Enter a number : ");
    scanf("%d",&num);
    int ans = fact(num);
    printf("%d",ans);
}