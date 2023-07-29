//working of assignment operators
#include<stdio.h>
void main()
{
    int a,c;
    printf("Enter a : ");
    scanf("%d",&a);
    c = a;
    printf("%d\n",c);
    c += a;
    printf("%d\n",c);
    c -= a;
    printf("%d\n",c);
    c *= a;
    printf("%d\n",c);
    c /= a;
    printf("%d\n",c);
    c %= a;
    printf("%d\n",c);
}
