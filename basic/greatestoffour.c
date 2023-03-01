
#include <stdio.h>
int main()
{
    int a, b, c, d;
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    scanf("%d", &d);

    int g = a > b ? (a > c ? (a > d ? a : d) : (c > d ? c : d)) : (b > c ? (b > d ? b : d) : (c > d ? c : d));

    printf("The greatest of all the four numbers is : %d", g);
}
