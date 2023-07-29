#include<stdio.h>
void main()
{
    int num;
    printf("Enter number : ");
    scanf("%d",&num);
    int temp=num,sum=0,fact,i,remainder;
    do{
        i=1,fact=1;
        remainder = temp % 10;
        do{
            fact=fact*i;
            i++;
        }
        while(i<=remainder);
        sum+=fact;
        temp=temp/10;
    }
    while(temp!=0);
    if(sum==num) {
        printf("%d is a strong number ",sum);
    }
    else {
        printf("%d is a not strong number ",sum);
    }
}
