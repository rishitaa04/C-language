#include <stdio.h>
int main()
{
    int n;
    printf("Enter any number : ");
    scanf("%d", &n);
    int last = n % 10;
    int first;
    while (n != 0)
    {
        first = n % 10;
        n = n / 10;
    }
    printf("The first and last digit is : %d and %d respectively", first, last);
    return 0;
}