#include <stdio.h>
void addOne(int *ptr)
{
    (*ptr)++;
}
void main()
{
    int *p, i = 10;
    p = &i;
    addOne(p);
    printf("%d", *p);
}