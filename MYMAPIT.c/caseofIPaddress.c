#include <stdio.h>
int main()
{
    // char arr[50];
    // scanf("%s", &arr);
    // int i = 0;
    // int num = 0;
    // while (arr[i] != '.')
    // {
    //     int r = arr[i] - '0';
    //     num = num * 10 + r;
    //     i++;
    // }
    int Ip;
    printf("Enter the range of IP address :");
    scanf("%d", &Ip);
    if (Ip >= 0 && Ip <= 127)
    {
        printf("Class A");
    }
    else if (Ip >= 128 && Ip <= 191)
    {
        printf("Class B");
    }
    else if (Ip >= 192 && Ip <= 224)
    {
        printf("Class C");
    }
    else if (Ip >= 225 && Ip <= 239)
    {
        printf("Class D");
    }
    else
    {
        printf("Class E");
    }
    return 0;
}