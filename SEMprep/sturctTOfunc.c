#include <stdio.h>
struct student
{
    int age;
};
void display(struct student s);
void main()
{
    struct student s1;
    printf("Enter age : ");
    scanf("%d", &s1.age);
    display(s1);
}
void display(struct student s)
{
    printf("\nAge : %d", s.age);
}