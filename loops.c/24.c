// REVERSE OF A GIVEN NUMBER

#include <stdio.h>
int main()
{
    int n;
    printf("Enter any number : ");
    scanf("%d", &n);
    int r = 0;
    while (n != 0)
    {
        int last = n % 10;
        r = r + last;
        r = r * 10;
        n = n / 10;
    }
    printf("The reversed number is : %d", r);
    return 0;
}