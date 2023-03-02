// WAP TO PRINT ALL THE EVEN NUMBERS FROM 1-100 USING CONTINUE STATEMENT

#include <stdio.h>
int main()
{
    int n;
    printf("Enter any number : ");
    scanf("%d", &n);

    for (int i = 0; i <= n; i++)
    {
        if (i % 2 == 0)
        {
            printf("%d ", i);
        }
        continue;
    }
    return 0;
}