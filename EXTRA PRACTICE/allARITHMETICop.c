#include<stdio.h>
void main()
{
    int a,b,add,sub,mul,mod;
    float div;
    printf("Enter any two numbers : ");
    scanf("%d %d",&a,&b);
    add=a+b;
    printf("Addition = %d\n",add);
    sub=a-b;
    printf("Subtraction = %d\n",sub);
    mul=a*b;
    printf("Multiplication = %d\n",mul);
    div = a/b;
    printf("Division = %f\n",div);
    mod=a%b;
    printf("Modulous = %d\n",mod);
}
