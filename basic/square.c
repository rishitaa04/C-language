#include <stdio.h>
int main()
{
    int a;

    printf("Enter the first number : ");

    scanf("%d", &a);

    int b = a*a;

    int i = 0;

    for (i = 0; i <= a; i++)
    {
        print("Square of number is : ", b);
    }
    return 0;
}
