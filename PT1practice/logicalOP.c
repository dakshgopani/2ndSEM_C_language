#include<stdio.h>
void main()
{
    int a=5,b=5,c=10,result;
    printf("(a==b)&&(a>c) is %d\n",(a==b)&&(a>c));
    result=(a==b)||(a>c);
    printf("(a==b)||(a>c) is %d",result);
}
