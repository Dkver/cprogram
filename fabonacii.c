#include<stdio.h>
int main(){
    int n,i;
    printf("enter the value of n:");
    scanf("%d",&n);
    int a=-1;
    int b=1;
    int sum= 0;
    
    for(i=0;i<=n-1;i++){
        sum=a+b;
        a=b;
        b=sum;
        printf("the fabonacci of %d is:%d\n",i,sum);
    }
    return 0;
}