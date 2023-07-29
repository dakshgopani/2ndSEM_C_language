#include<stdio.h>
union job
{
    float salary;
    int workerNo;
}j;
void main()
{
    j.salary = 12.3;
    j.workerNo = 1502;
    printf("Salary = %.1f\n",j.salary);
    printf("Number of worker = %d",j.workerNo);
}