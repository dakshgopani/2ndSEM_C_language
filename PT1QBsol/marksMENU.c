#include<stdio.h>
void main()
{
    int marks;
    printf("Enter your marks out of 100 : ");
    scanf("%d",&marks);
    switch(marks/10) {
case 10:
case 9:
    printf("A+");
    break;
case 8:
case 7:
    printf("A");
    break;
case 6:
case 5:
    printf("B");
    break;
case 4:
    printf("C");
    break;
case 3:
case 2:
case 1:
    printf("Fail");
    break;
default:
    printf("Enter valid marks");

    }
}
