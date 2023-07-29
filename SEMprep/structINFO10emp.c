#include <stdio.h>
struct students
{
    int studentId;
    char studentName[100];
    int studentMarks;
};
void main()
{
    struct students std[2];
    for (int i = 0; i < 2; i++)
    {
        printf("\nEnter details for student %d", i + 1);
        printf("\nEnter name : ");
        scanf("%s", &std[i].studentName);
        printf("Enter id : ");
        scanf("%d", &std[i].studentId);
        printf("Enter marks : ");
        scanf("%d", &std[i].studentMarks);
    }
    printf("\n OUTPUT \n");
    for (int i = 0; i < 2; i++)
    {
        printf("Name : %s\n", std[i].studentName);
        printf("Id : %d\n", std[i].studentId);
        printf("Marks : %d\n", std[i].studentMarks);
    }
}