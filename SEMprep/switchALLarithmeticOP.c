#include <stdio.h>
void main()
{
    int input;
    printf("Press 1 for + \n");
    printf("Press 2 for - \n");
    printf("Press 3 for * \n");
    printf("Press 4 for / \n");
    printf("Press 5 for % \n");
    printf("Press 6 to exit \n");
    printf("Enter any number : ");
    scanf("%d", &input);
    int num1, num2;
    printf("Enter 1st number : ");
    scanf("%d", &num1);
    printf("Enter 2nd number : ");
    scanf("%d", &num2);
    switch (input)
    {
    case 1:
        int add = num1 + num2;
        printf("Addition of %d and %d is %d", num1, num2, add);
        break;
    case 2:
        int sub;
        sub = num1 - num2;
        printf("Subtraction of %d and %d is %d", num1, num2, sub);
        break;
    case 3:
    int mul = num1*num2;
    }
}