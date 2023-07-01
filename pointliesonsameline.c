#include <stdio.h>
int main()
{
    int x1, y1, x2, y2, x3, y3, m1, m2;
    printf("enter the number x1 :");
    scanf("%d", &x1);
    printf("enter the number y1 :");
    scanf("%d", &y1);
    printf("enter the number x2 :");
    scanf("%d", &x2);
    printf("enter the number y2 :");
    scanf("%d", &y2);
    printf("enter the number x3 :");
    scanf("%d", &x3);
    printf("enter the number y3 :");
    scanf("%d", &y3);
    m1 = (y2 - y1) / (x2 - x1);
    m2 = (y3 - y2) / (x3 - x2);
    if (m1 = m2)
    {
        printf("points lie on the same line ");
    }
    else
    {
        printf("points are not in the same line");
    }
    return 0;
}