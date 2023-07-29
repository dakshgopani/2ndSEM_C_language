#include <stdio.h>
void printNumbers(int n)
{
    if (n > 0)
    {
        printNumbers(n - 1);
        printf("%d ", n);
    }
}
void main()
{
    int n=50;
    printNumbers(n);

}