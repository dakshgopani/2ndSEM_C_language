#include<stdio.h>
void main()
{
    int num;
    for(int i=1;i<=50;i++) {
        if(i%3==0 && i%5==0) {
            printf("FizzBuzz\n");
            continue;
        }
        else if(i%3==0) {
            printf("fizz\n");
            continue;
        }
        else if(i%5==0) {
            printf("Buzz\n");
            continue;
        }
        printf("%d\n",i);
    }
}
