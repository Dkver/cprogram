#include <stdio.h>
int main()
{
    int x;
    printf("enter the number :");
    scanf("%d", &x);
    if (x % 5 == 0 || x % 3 == 0)
    {
        printf("the number is divisible by 5 or 3");
    }
    else
    {
        printf("false");
    }
    return 0;
}