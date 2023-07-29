#include <stdio.h>

int findMaximum(int *num1, int *num2) {
    if (*num1 > *num2) {
        return *num1;
    } else {
        return *num2;
    }
}

int main() {
    int num1, num2;
    printf("Enter the first number: ");
    scanf("%d", &num1);
    printf("Enter the second number: ");
    scanf("%d", &num2);

    int max = findMaximum(&num1, &num2);
    printf("The maximum number is: %d\n", max);

    return 0;
}
