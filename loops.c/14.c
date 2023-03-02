// DECREASING AP i.e. 100,50,25,........ upto 'n' terms

#include <stdio.h>
int main()
{
    int a = 100;
    for (int i = 0; a > 0; i++)
    {
        printf("%d\n", a);
        a = a / 2;
    }
    return 0;
}