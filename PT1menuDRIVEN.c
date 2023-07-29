#include<stdio.h>
void main()
{
    int input;
    printf("Enter 1 for factorial of a number : \n");
    printf("Enter 2 for armstrong of a number : \n");
    printf("Enter 3 for palindrome of a number : \n");
    scanf("%d",&input);
    int num;
    printf("Enter one number : \n");
    scanf("%d",&num);
    int i,fact=1,temp,rev=0,remainder;
    switch(input) {
case 1:
    for(i=1;i<=num;i++) {
        fact = fact*i;
    }
    printf("Te factorial of a number (%d) is %d",num,fact);
    break;
case 2:
    temp = num;
    do{
        remainder = num%10;
        rev = rev + (remainder*remainder*remainder);
        num = num/10;
    }
    while(num!=0);
    if(temp==rev) {
        printf("%d is a armstrong number",temp);
    }
    else {
        printf("%d is not a armstrong number",temp);
    }
    }
}
