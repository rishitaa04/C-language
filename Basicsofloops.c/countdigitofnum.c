#include <stdio.h>
int main()
{
    int number;
    printf("Enter any number : ");
    scanf("%d", &number);
    int count = 0;
    while (number != 0)
    {
        number = number / 10;
        count++;
    }
    printf("The number of digits are : %d", count);
    return 0;
}