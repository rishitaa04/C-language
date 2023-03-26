#include <stdio.h>
int main()
{
    int a;
    char ch;
    float b;
    double d;
    printf("Size of integer is : %zu\n", sizeof(a));
    printf("Size of character is : %zu\n", sizeof(ch));
    printf("Size of float is : %zu\n", sizeof(b));
    printf("Size of double is : %zu\n", sizeof(d));

    return 0;
}