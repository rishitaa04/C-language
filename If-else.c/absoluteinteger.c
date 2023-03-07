#include <stdio.h>
int main()
{
    int number;
    printf("Enter any number : ");
    scanf("%d", &number);
    if (number < 0)
    {
        number = number * (-1);
    }
    printf("The absolute value is : %d ", number);
}