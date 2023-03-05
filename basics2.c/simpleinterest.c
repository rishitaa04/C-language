#include <stdio.h>
int main()
{
    float principle;
    float time;
    float rate;

    printf("Enter principle : ");
    scanf("%f", &principle);

    printf("Enter rate : ");
    scanf("%f", &rate);

    printf("Enter time : ");
    scanf("%f", &time);

    float Si = (principle * rate * time) / 100;
    printf("Simple Interest calculated is : %f ", Si);

    return 0;
}