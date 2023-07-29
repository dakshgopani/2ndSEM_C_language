// WAP to store information of 10 employees using structure
#include <stdio.h>
struct employees
{
    char name[50];
    int id[100];
    int phoneNo[100];
    float salary[100];
};
void main()
{
    struct employees emp[10];
    for (int i = 0; i < 10; i++)
    {
        printf("Enter your name : ");
        scanf("%s", &emp[i].name);
        printf("Enter your id : ");
        scanf("%s", &emp[i].id);
        printf("Enter your phone number : ");
        scanf("%s", &emp[i].phoneNo);
        printf("Enter your salary : ");
        scanf("%s", &emp[i].salary);
    }
    printf("\nOutput\n");
    for (int i = 0; i < 10; i++)
    {
        printf("Name : %s\n", emp[i].name);
        printf("Id : %s\n", &emp[i].id);
        printf("Phone Number : %s\n", &emp[i].phoneNo);
        printf("Salary : %s", &emp[i].salary);
    }
}