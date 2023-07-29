#include<stdio.h>
void main()
{
    int rev=0,store,n1,number,left;
    printf("Enter number : ");
    scanf("%d",&number);
    n1=number;
    while(number!=0) {
        left=number%10;
        rev=rev*10+left;
        number=number/10;
    }
    if(n1==rev) {
        printf("%d is palindrome",n1);
    }
    else {
        printf("NOT");
    }
}
