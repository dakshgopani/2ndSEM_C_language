#include<stdio.h>
void main()
{
    int num,square,cube,complement;
    int a,b;
    printf("Press 1 for square \n");
    printf("Press 2 for cube \n");
    printf("Press 3 for complement \n");
    scanf("%d",&num);
    switch(num)  {
case 1:
    printf("Enter a number : ");
    scanf("%d",&a);
    square = a * a;
    printf("square of %d is %d",a,square);
    break;
case 2:
    printf("Enter a number : ");
    scanf("%d",&a);
    cube = a*a*a;
    printf("Cube of %d is %d",a,cube);
    break;
    case 3:
    	printf("Enter a number : ");
    	scanf("%d",&a);
    	complement = ~a;
    	printf("Complement of %d is %d",a,complement);
    	break;
    	 default:
    	printf("Enter Valid input");
    }
   
}
