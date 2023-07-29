#include<stdio.h>
struct student{
    char name[10];
    int age[10];
    float percent[10];
    int rollNO[10];

};
void main()
{
    struct student new[1];
    for(int i=0;i<1;i++)
    {
        printf("Enter name : ");
        scanf("%s",&new[i].name);
        printf("Enter age : ");
        scanf("%s",&new[i].age);
        printf("Enter rollNo : ");
        scanf("%s",&new[i].rollNO);
        printf("Enter percent : ");
        scanf("%s",&new[i].percent);
    }
    printf("\noutput\n");
    for(int i=0;i<1;i++)
    {
        printf("Name : %s\n",new[i].name);
        printf("Age : %s\n",new[i].age);
        printf("ROllNO : %s\n",new[i].rollNO);
        printf("PERCENT : %s\n",new[i].percent);
    }
}