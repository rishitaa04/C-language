#include <stdio.h>
int add(int a, int b)
{
    int c = a + b;
    return c;
}
int main()

{
    int answer;
    answer = add(5, 4);
    printf("%d", answer);
}