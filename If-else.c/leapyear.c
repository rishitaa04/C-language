#include <stdio.h>
int main()
{
    int year;
    printf("enter year : ");
    scanf("%d", &year);

    if (year % 4 == 0)
    {
        printf("Leap year");
    }
    else
    {
        printf("Not a leap year");
    }
}