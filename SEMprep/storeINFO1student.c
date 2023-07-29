#include <stdio.h>
#include <string.h>
struct Student
{
    char name[50];
    int age;
    int rollNumber;
    float percent;
} std1;

int main()
{
    // struct Student student;
    printf("Enter name: ");
    fgets(std1.name, sizeof(std1.name), stdin);

    printf("Enter age: ");
    scanf("%d", &std1.age);

    printf("Enter roll number: ");
    scanf("%d", &std1.rollNumber);

    printf("Enter percent : ");
    scanf("%f", &std1.percent);

    printf("\nStudent Information:\n");
    printf("Name: %s", std1.name);
    printf("Age: %d\n", std1.age);
    printf("Roll Number: %d\n", std1.rollNumber);
    printf("percent : %f", std1.percent);

    return 0;
}
