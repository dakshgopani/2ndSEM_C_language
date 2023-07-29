#include <stdio.h>
void main()
{
    int num;
    printf("Enter one number : ");
    scanf("%d", &num);
    int c=0;
    for(int i=1;i<=num;i++)
    {
        if(num % i == 0 )
        c++;
    }
    if(c==2)
    printf("YES");
    else
    printf("NO");

}