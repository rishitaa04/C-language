#include <stdio.h>
int main()
{
    int num;
    printf("Enter any number : ");
    scanf("%d",&num);
    int c = 2;
    while (c < num)
    {
        if (num % 2 == 0)
        {
            printf("Not prime");
        }
    }
    c = c + 1;
        printf(" prime");
    return 0;
}