//GREATEST OF THREE NUMBERS
#include<stdio.h>
void main()
{
    int num1,num2,num3;
    printf("Enter 1st number : ");
    scanf("%d",&num1);
    printf("Enter 2nd number : ");
    scanf("%d",&num2);
    printf("Enter 3rd number : ");
    scanf("%d",&num3);
    if(num1>num2) {
        if(num1>num3) {
            printf("%d is greater",num1);
        }
    }
    if(num2 > num1) {
    	if(num2>num3) {
    		printf("%d is greater",num2);
		}
	}
	else {
		printf("%d is greatest",num3);
	}
}
