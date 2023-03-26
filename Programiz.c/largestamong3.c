#include <stdio.h>
int main()
{
    int a;
    int b;
    int c;
    printf("Enter the First number : ");
    scanf("%d", &a);
    printf("Enter the Second number : ");
    scanf("%d", &b);
    printf("Enter the Third number : ");
    scanf("%d", &c);

    if (a > b && a > c)
    {
        printf("A is greatest");
    }
    if (b > a && b > c)
    {
        printf("A is greatest");
    }
    if (c > a && c > b)
    {
        printf("C is greatest");
    }
    if (a == b && a == c)
    {
        printf("It's Equal");
    }
    return 0;
}