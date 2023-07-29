//grades from 0 to 100
#include<stdio.h>
void main()
{
    int marks;
    printf("Enter marks from 0 to 100 : ");
    scanf("%d",&marks);
    if(marks>90 && marks<=100) {
        printf("A+");
    }
    else if(marks>70 && marks<=90) {
        printf("A");
    }
    else if(marks>50 && marks<=70) {
        printf("B");
    }
    else if(marks>40 && marks<=50){
        printf("C");
    }
    else if(marks>=0 && marks<=40) {
        printf("Fail");
    }
    else {
        printf("Invalid marks");
    }
}
