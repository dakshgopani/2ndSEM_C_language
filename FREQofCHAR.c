// Write a program in C to Find the frequency of a character in a string.
#include <stdio.h>
#include <string.h>
void main()
{
    char a[100];
    printf("Enter any string : ");
    fgets(a, sizeof(a), stdin);
    int length = strlen(a);
    int input;
    printf("Frequency of which character do you want to find : ");
    scanf("%c", &input);
    int i, boolean=0;
    for (i = 0; i < length;i++)
    {
        if(a[i]==input)
        {
            boolean++;
        }
    }
    printf("Frequency of %c is %d ",input,boolean);
}