//armstrong number
#include<stdio.h>
void main()
{
    int num;
    printf("Enter a number : ");
    scanf("%d",&num);
    int sum = 0;
    int remainder,temp;
    temp=num;
    do {
        remainder = num % 10; //to store the last digit
        sum = sum + (remainder*remainder*remainder);
        num = num / 10;
    }
    while(num>0);
    if(temp==sum) {
        printf("%d is an armstrong number",sum);
    }
    else {
        printf("%d is not an armstrong number",sum);
    }

}
