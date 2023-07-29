#include<stdio.h>
#include<string.h>
struct person
{
    char name[100];
    int citNO;
    float salary;
}person1;
void main()
{
    strcpy(person1.name,"George Orwell");
    person1.citNO=1986;
    person1.salary=11323;
    printf("Name : %s\n",person1.name);
    printf("Citizenship No : %d\n",person1.citNO);
    printf("Salary : %f\n",person1.salary);
}