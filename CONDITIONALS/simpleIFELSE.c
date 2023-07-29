//simple ifelse
#include<stdio.h>
void main()
{
    int a;
    printf("Enter one number : ");
    scanf("%d",&a);
    if(a>100) {
        printf("%d is greater than 100",a);
    }
    else {
        printf("%d is less than 100",a);
    }
}
