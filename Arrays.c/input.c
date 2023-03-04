#include <stdio.h>
int main()
{
    int marks[5];
    printf("Enter phy marks : ");
    scanf("%d", &marks[0]);
    printf("Enter english marks : ");
    scanf("%d", &marks[1]);
    printf("Enter maths marks : ");
    scanf("%d", &marks[2]);
    printf("Enter biology marks : ");
    scanf("%d", &marks[3]);
    printf("Enter phy chemistry : ");
    scanf("%d", &marks[4]);

    printf("phy = %d , english = %d, maths = %d, biology = %d, chemistry = %d", marks[0], marks[1], marks[2], marks[3], marks[4]);

    return 0;
}