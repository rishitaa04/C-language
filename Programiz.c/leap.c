#include <stdio.h>
int main()
{

    int leap;
    printf("Enter year : ");
    scanf("%d", &leap);

    if(leap % 4 == 0){
        printf("It's a leap year ");
    }
    else{
        printf("It's not a leap year");
    }

    return 0;
}