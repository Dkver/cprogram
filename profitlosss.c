#include <stdio.h>
int main()
{
    int sp, cp, p, l,profitpercent,losspercent;
    printf("enter the number sp :");
    scanf("%d", &sp);
    printf("enter the number cp :");
    scanf("%d", &cp);
    if (sp > cp)
    {
        p = sp - cp;
        printf("profit:%d", p);
    }
    else if (cp > sp)
    {
        l = cp - sp;
        printf("loss :%d", l);
    }
    else
    {
        printf("no profit no loss");
    }
    return 0;
}