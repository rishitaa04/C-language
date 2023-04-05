#include <stdio.h>
int main()
{
    int month;
    printf("Enter the month number :  ");
    scanf("%d", &month);

    switch (month)
    {
    case 1:
        printf("It's january and has 31 no of days ");
        break;
    case 2:
        printf("It's February and has 28/29 no of days ");
        break;
    case 3:
        printf("It's March and has 31 no of days ");
        break;
    case 4:
        printf("It's April and has 30 no of days ");
        break;
    case 5:
        printf("It's May and has 31 no of days ");
        break;
    case 6:
        printf("It's June and has 30 no of days ");
        break;
    case 7:
        printf("It's July and has 31 no of days ");
        break;
    case 8:
        printf("It's August and has 31 no of days ");
        break;
    case 9:
        printf("It's September and has 30 no of days ");
        break;
    case 10:
        printf("It's October and has 31 no of days ");
        break;
    case 11:
        printf("It's November and has 30 no of days ");
        break;
    case 12:
        printf("It's December and has 31 no of days ");
        break;
    default:
        printf("Enter month number between 1-12");
    }
}