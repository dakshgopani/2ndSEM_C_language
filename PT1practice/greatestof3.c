#include<stdio.h>
void main()
{
    int a,b,c;
    printf("Enter 1st number : ");
    scanf("%d",&a);
    printf("Enter 2nd number : ");
    scanf("%d",&b);
    printf("Enter 3rd number : ");
    scanf("%d",&c);
    if(a>b) {
        if(a>c) {
            printf("%d is greatest ",a);
        }
    }
    else if(b>c) {
        printf("%d is greatest ",b);
    }
    else {
        printf("%d is greatest ",c);
    }
}
