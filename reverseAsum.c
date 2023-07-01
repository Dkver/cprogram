#include <stdio.h>
int main()
{
    int n,sum=0,num;
    printf("enter the value of n:");
    scanf("%d", &n);
    
    int reverse = 0;
    int r = 0;
     num=n;
    while (n != 0)
    {
        r = n % 10;
        n = n / 10;
        reverse = reverse * 10 + r;
      
    }
    sum=reverse+num;
    printf("%d",sum);
    return 0;
}