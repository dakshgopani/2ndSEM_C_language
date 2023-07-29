// Write a program in C to Store information of 10 Employees/10 students using structures
#include <stdio.h>
struct employees
{
    char name[100];
    int ID;
    int age;
    int phoneNumber;
};
void main()
{
    struct employees emp[10];
    for (int i = 0; i < 10; i++)
    {
        printf("Enter name : ");
        scanf("%s", &emp[i].name);
        printf("Enter id : ");
        scanf("%d", &emp[i].ID);
        printf("Enter age : ");
        scanf("%d", &emp[i].age);
        printf("Enter phoneNumber : ");
        scanf("%d", &emp[i].phoneNumber);
    }
    printf("\nOUTPUT\n");
    for (int i = 0; i < 10; i++)
    {
        printf("Name : %s\n", emp[i].name);
        printf("ID : %d\n", emp[i].ID);
        printf("AGE : %d\n", emp[i].age);
        printf("phoneNumber : %d\n", emp[i].phoneNumber);
    }
}