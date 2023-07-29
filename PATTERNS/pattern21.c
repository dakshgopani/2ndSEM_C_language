#include<stdio.h>
void main()
{
    int n;
    int x='A';
    for(int i='A';i<='E';i++) {
        for(int j='A';j<=i;j++) {
            printf(" %c ",x++);
        }
        printf("\n");
    }
}
