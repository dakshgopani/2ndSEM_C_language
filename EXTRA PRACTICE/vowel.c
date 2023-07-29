#include<stdio.h>
void main()
{
    char vowel;
    printf("Enter any character to check whether it is vowel or not : ");
    scanf("%c",&vowel);
    switch(vowel) {
case 'A':
case 'a':
    printf("The character is a vowel");
    break;
case 'e':
case 'E':
    printf("%cThe character is a vowel",vowel);
    break;
case 'i':
case 'I':
    printf("The character is a vowel");
    break;
case 'o':
case 'O':
    printf("The character is a vowel");
    break;
case 'U':
case 'u':
    printf("The character is a vowel");
    break;
default:
    printf("Not a vowel");
    break;
    }
}
