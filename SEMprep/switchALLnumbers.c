#include <stdio.h>
void main()
{
    int input;
    printf("Enter 1 for armstrong \n");
    printf("Enter 2 for strong \n");
    printf("Enter 3 for factorial\n");
    printf("Enter 4 for palindrome\n");
    printf("Enter 5 for neon\n");
    printf("Enter 6 for perfect\n");
    printf("Enter 7 to exit\n");
    printf("Enter your choice : ");
    scanf("%d", &input);
    int num;
    printf("Enter one number : ");
    scanf("%d", &num);
    int temp = num, sum = 0, reverse = 0, remainder;
    switch (input)
    {
    case 1:
        do
        {
            remainder = num % 10;
            sum = sum + (remainder * remainder * remainder);
            num = num / 10;
        } while (num != 0);
        if (temp == sum)
            printf("%d YES", temp);
        else
            printf("NO");
        break;
    case 2:
        int fact, i;
        do
        {
            i = 1, fact = 1;
            remainder = temp % 10;
            do
            {
                fact = fact * i;
                i++;
            } while (i <= remainder);
            sum += fact;
            temp = temp / 10;
        } while (temp != 0);
        if (sum == num)
            printf("%d strong", num);
        else
            printf("%d not strong", num);
        break;
    case 3:
        int factorial = 1;
        for (int i = 1; i <= num; i++)
        {
            factorial = factorial * i;
        }
        printf("Factorial of %d is %d", num, factorial);
        break;
    case 4:
        do
        {
            remainder = num % 10;
            reverse = reverse * 10 + remainder;
            num = num / 10;
        } while (num != 0);
        if (temp == reverse)
            printf("%d yes", temp);
        else
            printf("%d no", temp);
        break;
    case 5:
        int square = num * num;
        do
        {
            remainder = square % 10;
            sum = sum + remainder;
            square = square / 10;
        } while (square != 0);
        if (num == sum)
            printf("%d yes", num);
        else
            printf("%d no", num);
        break;
    case 6:
        for (int i = 1; i < num; i++)
        {
            if (num % i == 0)
            {
                sum = sum + i;
            }
        }
        if (sum == num)
            printf("%d yes", sum);
        else
            printf("%d no", sum);
        break;
    case 7:
        return 0;
    default:
        printf("Enter valid input");
    }
}