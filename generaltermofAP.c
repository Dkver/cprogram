#include<stdio.h>
int main(){
    int a,d,n;
    printf("enter the valu of a:");
    scanf("%d",&a);
    printf("enter the value of d:");
    scanf("%d",&d);
    printf("enter the value of n:");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        printf("%d ",a);
        a=a+d;
    }
    return 0;
}