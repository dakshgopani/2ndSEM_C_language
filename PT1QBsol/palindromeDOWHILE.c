#include<stdio.h>
void main()
{
    int num,rev=0,remainder,b;
    printf("Enter a number : ");
    scanf("%d",&num);
    b = num;
    do{
        remainder = num%10;
        rev = rev*10+remainder;
        num = num/10;
    }
    while(num!=0);
    if(num==rev) {
        printf("It is palindrome");
    }
    else {
     printf("It is not a palindrome");
    }
}
