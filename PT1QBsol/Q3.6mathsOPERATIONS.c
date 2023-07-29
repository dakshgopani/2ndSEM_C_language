#include<stdio.h>
void main()
{
    int sum;
    float subtraction;
    char operation;
    int num1,num2;
    printf("Enter 1 for + \n");
    printf("Enter 2 for - \n");
    printf("Enter 3 for * \n");
    printf("Enter 4 for / \n");
    printf("Enter 5 for % \n");
    start:
        printf("Enter which operation you want to perform : ");
        scanf("%d",&operation);
    switch(operation) {
case '+':
    printf("Enter 1st number : ");
    scanf("%d",&num1);
    printf("Enter 2nd number : ");
    scanf("%d",&num2);
    sum = num1+num2;
    printf("Sum is %d",sum);
    break;

   case '-':
    printf("Enter 1st number : ");
    scanf("%d",&num1);
    printf("Enter 2nd number : ");
    scanf("%d",&num2);
    subtraction = num1-num2;
    printf("subtraction is %d",subtraction);
    break;
    }
}
