#include <stdio.h>
void main()
{
    int *pc, c;
    c = 5;
    pc = &c;
    printf("%d", c); 
    printf("%d", *pc);
    c = 1;
}