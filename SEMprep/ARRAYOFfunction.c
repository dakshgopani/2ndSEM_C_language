#include<stdio.h>
void display(int age1,int age2);
void display(int age1,int age2)
{
    printf("%d\n",age1);
    printf("%d\n",age2);

}
void main()
{
    int ageARRAY[] = {2,4,6,8,120};
    display(ageARRAY[1],ageARRAY[2]);
}