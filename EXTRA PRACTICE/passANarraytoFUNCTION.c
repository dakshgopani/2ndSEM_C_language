#include<stdio.h>
#include<conio.h>
#include<process.h>
void descend(int x[],int limit);
void main()
{
    int n,x[15],i;
    printf("Enter the limit : \n");
    scanf("%d",&n);
    if(n>15) {
        printf("You have crossed the limit input property\n");
        exit(0);
    }
    else {
        printf("Enter elements in arrays\n");
        for(int i=0;i<n;i++) {
            scanf("%d",&x[i]);
        }
    }
    descend(x,n);
    printf("The sorted array is \n");
    for(int i=0;i<n;i++) {
        printf("%d",x[i]);
    }
}
void descend(int x[],int limit)
{
    int temp,i,j;
    for(i=0;i<limit;i++) {
        for(j=0;j<limit;j++) {
            if(x[i]>x[j]) {
                temp=x[i];
                x[i]=x[j];
                x[j]=temp;
            }
        }
    }
}
