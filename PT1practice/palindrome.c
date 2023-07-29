#include<stdio.h>
void main()
{
    int num=121,rem,rev=0,temp;
    temp=num;
    do{
        rem = num%10;
        rev = rev*10+rem;
        num/=10;
    }
    while(num!=0);
    if(temp==rev)
        printf("palindrome");
    else
        printf("NO");
}
