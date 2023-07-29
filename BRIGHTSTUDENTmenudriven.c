#include<stdio.h>
void main()
{
    int input;
    int num;
    printf("Enter 1 for factorial of a number \n");
    printf("Enter 2 for armstrong of a number \n");
    printf("Enter 3 for palindrome of a number \n");
    printf("Enter 4 for strong number \n");
    printf("Enter 5 for perfect number \n");
    printf("Enter 6 to exit \n");
    scanf("%d",&input);
    printf("Enter a number : ");
    scanf("%d",&num);
    int i,fact=1,temp,sum=0,remainder,reverse=0;
    int j,newfact;
    switch(input) {
case 1:
    for(i=1;i<=num;i++) {
        fact=fact*i;
    }
    printf("The factorial of %d is %d",num,fact);
    break;
case 2:
    temp=num;
    do {
        remainder = num%10;
        sum = sum + (remainder*remainder*remainder);
        num = num/10;
    }
    while(num!=0);
    if(temp==sum) {
        printf("%d is an armstrong number",temp);
    }
    else {
        printf("%d is not an armstrong number",temp);
    }
    break;
case 3:
    temp=num;
    do{
        remainder = num %10;
        reverse = reverse*10+remainder;
        num=num/10;
    }
    while(num!=0);
    if(temp==reverse) {
        printf("%d is a palindrome number",temp);
    }
    else {
        printf("%d is not a palindrome number",temp);
    }
    break;
case 4:
    temp=num;
    do{
        j=1,newfact=1;
        remainder = temp%10;
        do{
            newfact = newfact*j;
            j++;
        }
        while(j<=remainder);
        sum+=newfact;
        temp=temp/10;
    }
    while(temp!=0);
    if(sum==num) {
        printf("%d is a strong number",num);
    }
    else {
        printf("%d is not a strong number",num);
    }
    break;
case 5:
    for(i=1;i<num;i++) {
        if(num%i==0) {
            sum = sum + i;
        }
    }
    if(sum == num) {
        printf("%d is a perfect number ",num);
    }
    else {
        printf("%d is not a perfect number",num);
    }
    break;
case 6:
    printf("Exit");
    break;
default:
    printf("Enter valid input");
    break;
    }
}
