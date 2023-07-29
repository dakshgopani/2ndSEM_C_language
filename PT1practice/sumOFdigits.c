#include<stdio.h>
void main() {
    int num,rem;
    int b = num;
    int sum=0;
    printf("Enter a number : ");
    scanf("%d",&num);
    for(int i=1;i<=num;i++) {
        rem = num % 10;
        sum = sum + rem;
        num = num/10;
    }
    printf("%d",sum);
}

