#include <stdio.h>

int sum(int first, int second);

int main()
{
    int first;
    printf("Enter first number : ");
    scanf("%d", &first);

    int second;
    printf("Enter second number : ");
    scanf("%d", &second);

    int s = sum(first, second);
    printf("The sum is : %d", s);

    return 0;
}

int sum(int first, int second)
{
    return first + second;
}