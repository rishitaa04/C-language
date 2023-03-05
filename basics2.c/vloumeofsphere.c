#include <stdio.h>
int main()
{
    int radius;
    printf("Enter radius : ");
    scanf("%d", &radius);
    float volume;
    volume = 4 * 3.14 * radius * radius * radius / 3;
    printf("The volume is : %f ", volume);

    return 0;
}