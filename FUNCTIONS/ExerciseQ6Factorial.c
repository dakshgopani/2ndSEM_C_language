//Factorial of a number using recursion
#include <stdio.h>
int fact(int n);
int fact(int n)
{
    if (n == 0) // if(n==0 or n==1)
    return 1;
    else 
    return n*fact(n-1);
}
void main()
{
    int num;
    printf("Enter a number : ");
    scanf("%d",&num);
    int result = fact(num);
    printf("Factorial of %d is %d",num,result);
}
//done