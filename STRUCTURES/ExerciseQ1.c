// WAP to add two distances (in inch feet)
#include <stdio.h>
struct distance
{
    int feet;
    int inches;
} d1, d2, result;
void main()
{
    printf("Enter the first distance in feet and inches : ");
    scanf("%d %d", &d1.feet, &d1.inches);
    printf("Enter the second distance in feet and inches : ");
    scanf("%d %d", &d2.feet, &d2.inches);
    result.inches = d1.inches + d2.inches;
    result.feet = d1.feet + d2.feet;
    if (result.inches >= 12)
    {
        result.feet++;
        result.inches = result.inches - 12;
    }
    printf("The sum of the distance is %d feet and %d inch\n",result.feet,result.inches);
}