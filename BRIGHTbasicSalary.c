#include<stdio.h>
void main()
{
    int income,gross,HRA,DA;
    printf("Enter your basic income : ");
    scanf("%d",&income);
    if(income<=10000) {
        HRA = 0.2*income;
        DA = 0.8*income;
        printf("HRA = Rs %d\n",HRA);
        printf("DA = Rs %d\n",DA);
    }
    else if(income>=10001 && income<=20000) {
        HRA = 0.25*income;
        DA = 0.9*income;
        printf("HRA = Rs %d\n",HRA);
        printf("DA = Rs %d\n",DA);
    }
    else if(income>=20001) {
        HRA = 0.3*income;
        DA = 0.95*income;
        printf("HRA = Rs %d\n",HRA);
        printf("DA = Rs %d\n",DA);
    }
    else {
        printf("Invalid");

    }
    gross = income + HRA + DA;
    printf("Gross salary : %d",gross);
}
