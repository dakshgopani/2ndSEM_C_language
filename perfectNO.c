//PERFECT number
#include<stdio.h>
void main()
{
    int num;
    int sum=0;
    printf("Enter a number : ");
    scanf("%d",&num);
    for(int i = 1;i<num;i++) {
        if(num % i == 0) {
            sum = sum + i;
        }
    }
    if(sum == num) {
        printf("%d is a perfect number ",sum);
    }
    else {
        printf("%d is not a perfect number",sum);
    }
}
