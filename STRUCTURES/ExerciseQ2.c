// WAP to store information of a student using structure
#include <stdio.h>
struct student
{
    char name[50];
    int age[10];
    int rollNo[10];
    float percent[10];
};
void main()
{
    struct student new1[1];
    for (int i = 0; i < 1; i++)
    {
        printf("Enter name : ");
        scanf("%s", &new1[i].name);
        printf("Enter age : ");
        scanf("%s", &new1[i].age);
        printf("Enter rollNo : ");
        scanf("%s", &new1[i].rollNo);
        printf("Enter your percentage of Last year : ");
        scanf("%s", &new1[i].percent);
    }
    printf("\nOutput\n");
    for (int i = 0; i < 1; i++)
    {
        printf("Name : %s\n", new1[i].name);
        printf("Age : %s\n", new1[i].age);
        printf("rollNo : %s\n", new1[i].rollNo);
        printf("Your Percentage : %.2s\n", new1[i].percent);
    }
}