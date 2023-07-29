// Write a program in C to Find the number of vowels, consonants, digits and white spaces.
#include <stdio.h>
#include <string.h>
void main()
{
    char a[100];
    printf("Enter any string : ");
    fgets(a, sizeof(a), stdin);
    int len = strlen(a);
    int i, c1 = 0, c2 = 0, c3 = 0, c4 = 0;
    for (i = 0; i < len; i++)
    {
        if (a[i] == 'a' || a[i] == 'A' || a[i] == 'e' || a[i] == 'E' || a[i] == 'i' || a[i] == 'I' || a[i] == 'o' || a[i] == 'O' || a[i] == 'u' || a[i] == 'U')
            c1++;
        else if (a[i] == '1' || a[i] == '2' || a[i] == '3' || a[i] == '4' || a[i] == '5' || a[i] == '6' || a[i] == '7' || a[i] == '8' || a[i] == '9' || a[i] == '0')
            c2++;
        else if (a[i] == ' ' || a[i] == '\n' || a[i] == '\t')
            c3++;
        else
            c4++;
    }
    printf("Frequency of vowels is : %d\n", c1);
    printf("Frequency of consonants is : %d\n", c4);
    printf("Frequency of digits is : %d\n", c2);
    printf("Frequency of white spaces is : %d\n", c3);
}