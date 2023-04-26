#include <stdio.h>
void hello()
{
    printf("Hello \n");
}
void bye()
{
    printf("Bye bye !! \n");
}
int main()
{
    hello(); // jis function ko pelle call lgaenge vo pelle execute hoega
    bye();   // baki jo baad me likha vo baad me print hoega
    bye();
    hello();
    return 0;
}