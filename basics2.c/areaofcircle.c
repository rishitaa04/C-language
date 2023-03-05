#include <stdio.h>
int main()
{
    int radius;
    printf("Enter radius : ");
    scanf("%d", &radius);
    float area;
    area = 3.14 * radius * radius;
    printf("The area of circle is : %f", area);
}