#include<stdio.h>
int main(){
    int n,i;
    printf("enter the value of n:");
    scanf("%d",&n);
    
    int a=0;
    int b=1;
    int sum=0;
    printf("the fabonacci of first%d\n  the fabonacci of second %d\n ",a,b);
    for(i=0;i<n-2;i++){
        sum=a+b;
        a=b;
        b=sum;
    printf("the fabonacci of %d is %d\n",i,sum);
    }
    
    return 0;
}