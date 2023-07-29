#include<stdio.h>
void main()
{
    int n,marks;
    printf("Enter your marks : ");
    scanf("%d",&marks);
    n=marks/10;
    switch(n) {
        case 10:
        case 9:
        printf("You have secured A+ grade ");
        break;
        case 8:
        case 7:
        printf("You have secured A grade ");
        break;
        case 6:
        case 5:
        printf("You have secured B grade ");
        break;
        case 4:
        printf("You have secured C grade ");
        break;
        case 3:
        case 2:
        case 1:
        printf("You have Failed ");
        break;
        default:
        printf("Enter a valid input ");
    }
}