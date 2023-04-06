#include <stdio.h>
int main()
{
    int number;
    printf("Enter your number : ");
    scanf("%d", &number);
    int a = 0;
    int b = 1;
    int sum = 1;
    for (int i = 2; i <= number; ++i)
    {
        sum = a + b;
        a = b;
        b = sum;
        printf("The fibonacci series of %d is : %d", number, sum);
    }
    return 0;
}