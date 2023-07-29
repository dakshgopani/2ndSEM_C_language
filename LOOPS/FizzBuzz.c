//fizz(divBy3) buzz(divBy5) fizzbuzz(divBy3and5)
#include<stdio.h>
void main()
{
    int i;
    for(int i=1;i<=50;i++) {
        if(i%3==0 && i%5==0) {
            printf("FizzBuzz\n");
            continue;
        }
        else if(i%3==0) {
            printf("Fizz\n");
            continue;
        }
        else if(i%5==0) {
            printf("Buzz\n");
            continue;
        }
        printf("%d\n",i);
    }
}
//sometimes while running the program proper input is not coming so its the mistake of compiler , code is proper
