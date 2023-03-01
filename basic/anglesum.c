#include <stdio.h>
int main(){
    int angle1;
    int angle2;
    int angle3;

    printf(" Enter the 1st angle : ");
    scanf("%d", &angle1);

    printf(" Enter the 2nd angle : ");
    scanf("%d", &angle2);

    printf(" Enter the 3rd angle : ");
    scanf("%d", &angle3);

    if(angle1+angle2+angle3 == 180){
        printf(" It's a valid triangle ");
    }
    else {
        printf( " Not a valid triangle ");
    }
}