/*
 Do-While loop


#include <stdio.h>
int main(){
    int j;
    printf("%d",j);         garbage value aa jati hai
    while(j<=10){

        j=j+1;
    }
    return 0;
}*/
#include <stdio.h>
int main()
{
    int i = 10;

    do
    {
        printf("Hey");
        i++;
    } while (i < 10);
    return 0;
}