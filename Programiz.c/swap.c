#include <stdio.h>
int main()
{
    int a;
    int b;
    int temp;

    // before swapping;
    printf("Enter the first number : ");
    scanf("%d", &a);

    printf("Enter the second number : ");
    scanf("%d", &b);

    printf("The number before swapping is : %d %d\n", a, b);

    temp = a;
    a = b;
    b = temp;

    printf("The number after swapping is : %d %d", a, temp);

    return 0;
}