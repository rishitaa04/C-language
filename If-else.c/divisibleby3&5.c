#include <stdio.h>
int main()
{
    int n;
    printf("Enter any number : ");
    scanf("%d", &n);
    if (n % 5 == 0 || n % 3 == 0)
    {
        printf("Divisible by 5 and 3");
    }
    else
    {
        printf("Not divisible by either one or none");
    }
    return 0;
}
