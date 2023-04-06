#include <stdio.h>
int main()
{
    int number;
    printf("Enter the digits of your number : ");
    scanf("%d", &number);
    int rem = 0;
    while (number > 0)
    {
        rem = rem * 10;
        rem = rem + (number % 10);
        number = number / 10;
    }
    printf("Reverse of a number is : %d", rem);
    return 0;
}