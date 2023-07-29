//oddeven
#include<stdio.h>
void main()
{
    int num1;
    printf("Enter one number : ");
    scanf("%d",&num1);
    if(num1%2==0) {
        printf("%d is even number",num1);
    }
    else {
        printf("%d is odd number",num1);
    }
}
