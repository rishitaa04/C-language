#include <stdio.h>
int main()
{
    int a;
    int b;
    int c;
    printf("Enter first side : ");
    scanf("%d", &a);

    printf("Enter second side : ");
    scanf("%d", &b);

    printf("Enter third side : ");
    scanf("%d", &c);

    if (a + b > c || b + c > a || c + a > b)
    {
        printf("Yes a triangle");
    }
    else
    {
        printf("Not a triangle");
    }

    return 0;
}