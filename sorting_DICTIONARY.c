// Write a program in C to Sort elements in the lexicographical order (dictionary order)
#include <stdio.h>
#include <string.h>
void main()
{
    char a[10][20];
    char temp[10];
    int i, j;

    printf("Enter 10 words: ");
    for (i = 0; i < 10; i++)
    {
        scanf("%s", &a[i]);
    }

    for (i = 0; i < 10; i++)
    {
        for (j = i + 1; j < 10; j++)
        {
            if (strcmp(a[i], a[j]) > 0)
            {
                strcpy(temp, a[i]);
                strcpy(a[i], a[j]);
                strcpy(a[j], temp);
            }
        }
    }
    printf("The sorted string is:\n");
    for (i = 0; i < 10; i++)
    {
        printf("%s\n", a[i]);
    }
}