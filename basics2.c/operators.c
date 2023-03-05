#include <stdio.h>
int main()
{
    int a;
    int b;
    printf("Enter the first number : ");
    scanf("%d", &a);
    printf("Enter the second number : ");
    scanf("%d", &b);

    printf("%d\n", a + b);
    printf("%d\n", a - b);
    printf("%d\n", a / b);
    printf("%d\n", a * b);
    printf("%d\n", a % b);
    printf("%d\n", ++b);
    printf("%d\n", --b);
    printf("%d\n", ++a);
    printf("%d\n", --a);
}