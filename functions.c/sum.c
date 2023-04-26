#include <stdio.h>
int sum(int a, int b); // return value ka type jo hai vo likhna hota hai i.e. datatype i.e. integer
int main()
{
    int a, b;
    printf("Enter first number : ");
    scanf("%d", &a);
    printf("Enter second number : ");
    scanf("%d", &b);

    int s = sum(a, b);
    printf("sum is : %d ", s);

    return 0;
}

int sum(int a, int b)
{
    return a + b;
}