#include<stdio.h>
void main()
{
    char gender;
    printf("Enter your gender [M/F]: ");
    scanf("%c",&gender);
    if(gender=='M')
        printf("you are a male");
    else
        printf("you are a female");
}
