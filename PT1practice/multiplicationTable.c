#include<stdio.h>
void main() {
    int num;
    int result;
    printf("Enter a number : ");
    scanf("%d",&num);
    for(int i=1;i<=10;i++) {
     result = num * i;
     printf("%d * %d is %d\n",num,i,result);
    }
}
