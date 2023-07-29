#include<stdio.h>
void main()
{
  int num1,num2;
  printf("Enter 1st number : ");
  scanf("%d",&num1);
  printf("Enter 2nd number : ");
  scanf("%d",&num2);
  int input;
  printf("\n Input your option \n");
  printf("1-Addition\n");
  printf("2-Subtraction\n");
  printf("3-Multiplication\n");
  printf("4-Division\n");
  printf("5-Exit\n");
  scanf("%d",&input);
  switch(input)
  {
  case 1:
    printf("The Addition of %d and %d is %d \n",num1,num2,num1+num2);
    break;
  case 2:
    printf("The Subtraction of %d and %d is %d \n",num1,num2,num1-num2);
    break;
  case 3:
    printf("The Multiplication of %d and %d is %d \n",num1,num2,num1*num2);
    break;
    case 4:
    if(num2 == 0) {
        printf("the second integer is zero . Divide by zero\n");
    }
    else  {
        printf("the division of %d and %d is %d\n",num1/num2);
    }
    break;
    case 5:
        break;
    default:
        printf("Enter valid input");
        break;
  }
}
