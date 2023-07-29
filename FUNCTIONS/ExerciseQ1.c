//Even or Odd Number program with function
// #include <stdio.h>
// int oddEVEN(int num);
// int oddEVEN(int num)
// {
//     if (num % 2 == 0)
//         return 1;
//     else
//         return 0;
// }
// void main()
// {
//     int input;
//     printf("Enter a number : ");
//     scanf("%d", &input);
//     int new = oddEVEN(input);
//     if (new)
//     {
//         printf("The number is even");
//     }
//     else
//     {
//         printf("The number is odd");
//     }
// }

// 2nd method
//Even or Odd Number program with function
#include<stdio.h>
void evenOdd(int num)
{
    if(num%2==0)
    printf("%d is an Even Number",num);
    else
    printf("%d is an Odd Number",num);
}
void main()
{
    int a;
    printf("Enter a number: ");
    scanf("%d",&a);
    evenOdd(a);
}
//done
