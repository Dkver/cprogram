#include <stdio.h>
int main()
{
    int x, y;
    printf("enter the value of x :");
    scanf("%d", &x);
    printf("enter the value of y :");
    scanf("%d", &y);
    if (x == 0 && y == 0)
    {
        printf("lies on origin");
    }
    else if (x != 0 && y == 0)
    {
        printf("lies on x axis");
    }
    else if (x == 0 && y != 0)
    {
        printf("lies on y axis ");
    }
    else{
        printf("does not lies on x or y axis");
    }
    return 0;
}