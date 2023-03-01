#include <stdio.h>
int main()
{
    float height;
    float weight;
    float BMI;

    printf("Enter the weight : ");
    scanf("%f", &weight);

    printf("Enter the height : ");
    scanf("%f", &height);

    BMI = (weight / (height * height));
    printf("Your body mass index (BMI) is : %f ", BMI);

    if (BMI < 15)
    {
        printf("Your BMI category is : Starvation \n ");
    }
    else if (15.1 <= BMI <= 17.5)
    {
        printf("Your BMI category is : Anorexic \n ");
    }
    else if (17.6 <= BMI <= 18.5)
    {
        printf("Your BMI category is : Underweight \n ");
    }
    else if (18.6 <= BMI <= 24.9)
    {
        printf("Your BMI category is : Ideal \n ");
    }
    else if (25 <= BMI <= 25.9)
    {
        printf("Your BMI category is : Overweight \n ");
    }
    else if (30 <= BMI <= 30.9)
    {
        printf("Your BMI category is : Obese \n ");
    }
    else if (BMI >= 40)
    {
        printf("Your BMI category is : Morbidly Obese \n ");
    }
    else
    {
        printf("Wrong entry");
    }
    return 0;
}