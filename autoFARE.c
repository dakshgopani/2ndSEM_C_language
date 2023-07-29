// autofare
#include <stdio.h>
/*void main()
{
    for(int i=1;i<=100;i=i+5) {
        printf("%d\n",i);

    }
}*/
void main()
{
    int num;
    float distance, wait_time;
    int fare;
    printf("Hello and Welcome to Day/Night Auto fare Generator\n");
    printf("Enter 1 for DayTime and 2 for NightTime : ");
    scanf("%d", &num);
    if (num == 1)
    {
        printf("Enter Distance in kilometers : ");
        scanf("%f", &distance);
        printf("Enter waiting time in Minutes : ");
        scanf("%f", &wait_time);
        if (distance > 0 && distance <= 1.5)
        {

            fare = 23;
            printf("Fare is %d", fare);
            
        }
        else if (distance > 1.5)
        {
        };
    }
}
