// DISPLAY GP 1,2,4,8,16,32,.....
/*#include <stdio.h>
int main()
{
    int n;
    printf("enter the number : ");
    scanf("%d", &n);
    int a = 1;
    for (int i = 1; i <= n; i++)
    {
        printf("%d\n", a);
        a = a * 2;
    }
    return 0;
}*/

// display gp of 3,12,48....

#include <stdio.h>
int main()
{
    int x;
    printf("Enter the number : ");
    scanf("%d", &x);
    int y = 3;
    for (int i = 3; i <= x; i++)
    {
        printf("%d\n", y);
        y = y * 4;
    }
    return 0;
}
