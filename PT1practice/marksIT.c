#include<stdio.h>
void main()
{
    int marks;
    printf("Enter your marks out of 100 : ");
    scanf("%d",&marks);
    if(marks>=70 && marks<=100) {
        printf("Distinction");
    }
    else if(marks>=60 && marks<=69) {
        printf("First Class");
    }
    else if(marks>=50 && marks<=59) {
        printf("Second Class");
    }
    else if(marks>=40 && marks<=49) {
        printf("Pass Class");
    }
    else {
        printf("Fail");
    }
}
