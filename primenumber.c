#include<stdio.h>
void main()
{
    int i,new=0;
    int n;
    printf("Enter n : ");
    scanf("%d",&n);
    for(i=2;i<=n/2;i++) {
        if(n%i==0) {
            new=1;
            break;
        }
    }
    if(new==1) {
        printf("%d is not a prime number ",n);
    }
    else {
        printf("%d is a prime number",n);
    }
}