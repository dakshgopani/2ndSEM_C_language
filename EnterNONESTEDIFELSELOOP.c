//USING NESTED IF ELSE AND LOOPS
#include<stdio.h>
void main()
{
    int num;
    int a;
    printf("How many numbers you want to enter : ");
    scanf("%d",&num);
    for(int i=1;i<=num;i++) {
        printf("Enter number %d : ",i);
        scanf("%d",&a);
        if(a%2==0) {
            printf("%d is even number \n",a);
        }
        else {
            printf("%d is odd number \n",a);
        }
    }
}
