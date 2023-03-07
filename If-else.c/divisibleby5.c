#include <stdio.h>
int main(){
    int a;
    printf("Enter the number : ");
    scanf("%d",&a);

    if(a%5==0){
        printf("Divisible by 5 ");
    }
    else{
        printf("Not divisile by 5 ");
    }
}