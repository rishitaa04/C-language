#include <stdio.h>
int main()
{
    int number;
    int sum = 0;
    int m;
    printf("Enter the number : ");
    scanf("%d", &number);
    while (number > 0)
    {
        m = number % 10;
        sum += m;
        number = number / 10;
    }
    if (sum % 5 == 0)
    {
        printf("This bill number is eligible for gift coupon ");
    }
    else
    {
        printf("This bill number is not eligible for gift coupon");
    }
    return 0;
}
