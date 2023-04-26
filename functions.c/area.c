#include <stdio.h>
float square(float side);
float rectangle(float length, float breadth);
float circle(int radius);

int main()
{
    int radius;
    printf("Enter radius : ");
    scanf("%d", &radius);
    printf("%f \n", circle(radius));

    float length;
    float breadth;
    printf("Enter length : ");
    scanf("%f", &length);
    printf("Enter breadth : ");
    scanf("%f", &breadth);
    printf("%f \n ", rectangle(length, breadth));

    float side;
    printf("Enter side of the square : ");
    scanf("%f", &side);
    printf("%f",square(side));
}
float square(float side)
{
    return side * side;
}
float rectangle(float length, float breadth)
{
    return length * breadth;
}
float circle(int radius)
{
    return 3.14 * radius * radius;
}