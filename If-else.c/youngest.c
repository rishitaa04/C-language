#include <stdio.h>
int main()
{
    int ram;
    int shyam;
    int ajay;

    printf("Enter ram's age : ");
    scanf("%d", &ram);

    printf("Enter shyam's age : ");
    scanf("%d", &shyam);

    printf("Enter ajay's age : ");
    scanf("%d", &ajay);

    if (ram < shyam && ram < ajay)
    {
        printf("Ram is younger");
    }
    if (shyam < ram && shyam < ajay)
    {
        printf("Shyam is younger");
    }
    if (ajay < ram && ajay < shyam)
    {
        printf("Ajay is younger ");
    }
    return 0;
}