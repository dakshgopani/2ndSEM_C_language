#include<stdio.h>
void main()
{
    int num;
    printf("Enter a number : ");
    scanf("%d",&num);

    switch(num%2) {
    case 0:
        printf("even");
        break;
case 1:
    printf("odd");
    break;
case 2:
    printf("even");
    break;
default:
    printf("F");

    }
}
