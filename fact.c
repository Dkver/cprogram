#include<stdio.h>
int main(){
    int n,i;
    printf("enter the value of n:");
    scanf("%d",&n);
    int fact=1;
    for(i=1;i<=n;i++){
        fact=fact*i;
    }
    printf("the factorial is:%d",fact);
    return 0;
}