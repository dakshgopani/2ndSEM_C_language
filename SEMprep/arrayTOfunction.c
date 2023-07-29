#include<stdio.h>
void display(int age1,int age2)
{
    printf("%d\n",age1);
    printf("%d\n",age2);
}
void main()
{
    int ageArray[5] = {2,4,6,8,10};
    display(ageArray[1],ageArray[2]);
}