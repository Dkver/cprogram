#include<stdio.h>
int main(){
    int n,r;
    printf("enter the value of n,r");
    scanf("%d %d",&n,&r);
    int a=3;
    for(int i=1;i<=n;i++){
        printf("%d ",a);
        a=a*r;
    }
    return 0;
}