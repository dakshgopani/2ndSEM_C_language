// Write a program in C to find the factorial of a given number using pointers.
#include <stdio.h>
void calculateFactorial(int num, unsigned long *result) {
    *result = 1;
    for (int i = 1; i <= num; i++) {
        *result *= i;
    }
}
int main() {
    int num;
    unsigned long factorial;
    printf("Enter a number: ");
    scanf("%d", &num);
    calculateFactorial(num, &factorial);
    printf("Factorial of %d = %llu\n", num, factorial);
    return 0;
}

