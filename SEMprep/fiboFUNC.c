#include<stdio.h>
int fibo(int num);
int fibo(int num)
{
    if(num==0||num==1)
    return num;
    else 
    return fibo(num-1) + fibo(num-2);
}
void main()
{
    int num;
    printf("Enter a range till you want the output : ");
    scanf("%d",&num);
    for(int i=0;i<num;i++)
    {
        printf("%d ",fibo(i));
    }
}