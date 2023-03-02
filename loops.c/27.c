// VALUE OF ONE NUMBER RAISED TO THE POWER OF ANOTHER

#include <stdio.h>
int main()
{
    int a;
    int b;
    printf("Enter base : ");
    scanf("%d", &a);
    printf("Enter power : ");
    scanf("%d", &b);
    int power = 1;
    for (int i = 1; i <= b; i++)
    {
        power = power * a;
    }
    printf("%d Raised to the power %d is %d", a, b, power);
    return 0;
}