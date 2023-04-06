#include <stdio.h>
int main()
{
    int number;
    int a = 1;
    int b = 1;
    int sum = 1;
    printf("Enter your number : ");
    scanf("%d", &number);
    for (int i = 1; i <= number - 2; i++)
    {
        sum = a + b;
        a = b;
        b = sum;
    }
    printf("%d", sum);
    return 0;
}