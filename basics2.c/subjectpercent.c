#include <stdio.h>
int main()
{
    float English;
    float Hindi;
    float Maths;
    float Science;
    float Sst;

    printf("Enter English marks : ");
    scanf("%f", &English);

    printf("Enter Hindi marks : ");
    scanf("%f", &Hindi);

    printf("Enter Maths marks : ");
    scanf("%f", &Maths);

    printf("Enter Science marks : ");
    scanf("%f", &Science);

    printf("Enter Sst marks : ");
    scanf("%f", &Sst);

    float average = (English + Hindi + Maths + Science + Sst) / 5;
    printf("Average of all the subjects is : %f", average);
}