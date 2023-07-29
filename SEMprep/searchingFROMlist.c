#include <stdio.h>
int search(int arr[], int n, int x)
{
    int i;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == x)
            return i;
    }
    return -1;
}
void main()
{
    int num;
    int;
    printf("Enter the number of elements in a list : ");
    scanf("%d", &num);
    int arr[num];
    for (int i = 0; i < num; i++)
    {
        printf("Enter element %d : ", i + 1);
        scanf("%d", &arr[i]);
    }
    int x;
    printf("Enter the number to search : ");
    scanf("%d", &x);
    int index = search(arr, num, x);
    if (index == -1)
        printf("NO");
    else
        printf("%d at %d", x,index);
}