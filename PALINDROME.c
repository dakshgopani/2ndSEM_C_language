//palindrome of a number
//121 = 121
#include<stdio.h>
void main()
{
    int num,rev=0,remainder,b;
    printf("Enter a number : ");
    scanf("%d",&num);
    b=num;
    while(num!=0) {
        remainder=num%10;
        rev=rev*10+remainder;
        num=num/10;
    }
    if(b==rev) {
        printf("It is palindrome");
    }
    else {
        printf("It is not a palindrome");
    }
}
//done
