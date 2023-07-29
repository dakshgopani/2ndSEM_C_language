#include<stdio.h>
#include<string.h>
void main()
{
    char str[100];
    int i,num=1;
    printf("Enter any statement : ");
    scanf("%s",&str);
    for(i=0;str[i]!='\0';i++) {
        if(str[i]== ' ');
        num++;
    }
    printf("Number of characters are : %d\n",i);
    printf("Number of words are : %d\n",num);
}
