#include <stdio.h>
void main()
{
    int *pc, c;
    c = 5;
    pc = &c;
    printf("%u", &pc);
}