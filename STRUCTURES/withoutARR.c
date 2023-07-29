#include<stdio.h>
struct student{
    char name;
    int age;
    float percent;
    int rollNO;

};
void main()
{
    struct student new[1];
    for(int i=0;i<1;i++)
    {
        printf("Enter name : ");
        scanf("%c",&new[i].name);
        printf("Enter age : ");
        scanf("%d",&new[i].age);
        printf("Enter rollNo : ");
        scanf("%d",&new[i].rollNO);
        printf("Enter percent : ");
        scanf("%f",&new[i].percent);
    }
    printf("\noutput\n");
    for(int i=0;i<1;i++)
    {
        printf("Name : %c\n",new[i].name);
        printf("Age : %d\n",new[i].age);
        printf("ROllNO : %d\n",new[i].rollNO);
        printf("PERCENT : %f\n",new[i].percent);
    }
}