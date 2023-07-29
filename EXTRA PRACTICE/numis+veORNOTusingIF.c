//to check whether a number is positive or not
#include<stdio.h>
void main()
{
    int num;
    printf("Enter any number : ");
    scanf("%d",&num);
    if(num<0)
        printf("The number is negative");
    else {
        printf("The number is positive");
    }
}
