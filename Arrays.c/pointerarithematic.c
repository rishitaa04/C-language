/*

Pointer can be incremeneted pr decremeted via airithematic operation

for e.g.

    int age = 22;
    int *ptr = &age;
    ptr++;


    we can subtract one pointer from another and can be compared

*/
#include <stdio.h>
int main()
{
    int age = 22;
    int *ptr = &age;
    printf("ptr = %u\n", ptr);
    ptr--;
    printf("ptr = %u\n", ptr);
    ptr++;
    printf("ptr = %u\n", ptr);

    return 0;
}
