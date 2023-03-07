#include <stdio.h>
int main()
{
    int costprice;
    int sellingprice;
    printf("Enter costprice : ");
    scanf("%d", &costprice);
    printf("Enter sellingprice : ");
    scanf("%d", &sellingprice);
    if (sellingprice > costprice)
    {
        printf("Profit");
    }
    else if (sellingprice == costprice)
    {
        printf("Neither profit nor loss ");
    }
    else
    {
        printf("loss");
    }
    return 0;
}