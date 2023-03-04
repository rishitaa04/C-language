#include <stdio.h>
int main()
{
    float price = 100;
    float *ptr = &price;
    ptr++;
    printf("ptr = %u \n", ptr);
    ptr++;
    printf("ptr = %u \n", ptr);
}