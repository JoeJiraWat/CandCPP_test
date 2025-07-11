#include <stdio.h>
int main()
{
    int hours;
    int price = 450;
    printf("enter your hours: ");
    scanf("%d", &hours);
    printf("Total: %d" , hours*price);
    return 0;
}