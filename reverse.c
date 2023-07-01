#include <stdio.h>
int main()
{
    int n, sum;
    printf("enter the value of n:");
    scanf("%d", &n);
    int reverse = 0;
    int r = 0;
    while (n != 0)
    {

        r = n % 10;
        n = n / 10;
        reverse = reverse * 10 + r;
    }
    printf("%d", reverse);
    return 0;
}