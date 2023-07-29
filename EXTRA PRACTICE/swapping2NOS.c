#include<stdio.h>
void main()
{
    int x=10,y=20,z;
    x=x+y;
    y=x-y;
    x=x-y;
    printf("%d\n",x);
    printf("%d\n",y);
}
