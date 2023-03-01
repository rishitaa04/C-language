#include <stdio.h>
int main()
{
    int amt;
    int amount;
    int sp;
    printf("Enter the selling prince of the product : ");
    scanf("%d", &sp);

    int cp;
    printf("Enter the cost prince of the product : ");
    scanf("%d", &cp);

    if (sp > cp)
    {
        amt = sp - cp;
        printf(" Profit of = %d ", amt);
    }
    else if (cp > sp)
    {
        amount = cp - sp;
        printf(" Loss of = %d ", amt);
    }
    return 0;
}