#include <stdio.h>
int main()
{
    int i = 10;
    {
        printf("Hello");
        i++;
    }
    while (i < 10)
        ;
    return 0;
}