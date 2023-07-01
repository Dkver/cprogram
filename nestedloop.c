#include <stdio.h>
int main()
{
    int a, b, c;
    printf("enter the 1st number :");
    scanf("%d", &a);
    printf("enter the 2nd number :");
    scanf("%d", &b);
    printf("enter the 3trd number :");
    scanf("%d", &c);
    if (a > b)
    { // b is out of race
        if (a > c)
            printf("%d is greatest", a);
        else // c>a
            printf("%d is greatest ", c);
    }
    else
    { // b>a
        if (b > c)
            printf("%d is greatest", b);
        else // c>b
            printf("%d is greatest", c);
    }
    return 0;
}