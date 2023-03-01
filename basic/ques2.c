#include <stdio.h>
int main()
{
    int i = -1;
    int j = -1;
    int k = 0;
    int l = 2;
    int m;
    m = i++ && j++ && k++ || l++;
    printf("%c%d%d%d%d", i, j, k, l, m);
    return 0;
}