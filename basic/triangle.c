#include <stdio.h>
int main()
{
    int a;
    int b;
    int c;
    int area;

    printf("Enter the first side : ");

    scanf("%d", &a);

    printf("Enter the second side : ");

    scanf("%d", &b);

    printf("Enter the third side : ");

    scanf("%d", &c);

    if (a > b && a > c)
    {
        printf(" It's a triangle ");
    }
    if ( b > a && b > c ){

        printf(" It's a triangle");
    }
    if ( c > a && c > b){

        printf(" It's a triangle ");
    }
    else{
        printf(" Not a triangle ");
    }
}
