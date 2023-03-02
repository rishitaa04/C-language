/* WAP TO PRINT ODD NUMBERS FROM 1-100

#include <stdio.h>
int main()
{

    for (int i = 1; i <= 100; i++)
    {
        if (i % 2 != 0)
        {
            printf("%d ", i);
        }
    }
    return 0;
}*/

// USING CONTINUE STATEMENT

#include <stdio.h>
int main()
{
    int n;
    printf("Enter any number : ");
    scanf("%d ", &n);
    for (int i = 1; i <= n; i++)
    {
        if (i % 2 == 0)
        {
            continue;
        }
        printf("%d ", i);
    }
}