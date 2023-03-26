#include <stdio.h>
int main()
{
    int a;
    printf("Enter the number : ");
    scanf("%d", &a);

    int b;
    printf("Enter the number : ");
    scanf("%d", &b);

    int qut;
    qut = a / b;
    printf("The quotient is : %d \n", qut);

    int rem;
    rem = a % b;
    printf("The remainder is : %d", rem);

    return 0;
}