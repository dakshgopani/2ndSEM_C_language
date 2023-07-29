#include<stdio.h>
void main()
{
    int i;
    for(int i=69;i>=65;i--) {
        for(int j=69;j>=i;j--) {
            printf("%c ",j);
        }
        printf("\n");
    }
}
