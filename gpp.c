#include<stdio.h>
int main(){
    int n;
    printf("enter the value of n:");
    scanf("%d",&n);
    float a=100;
    for(int i=1;i<=n;i++){
        a=a/2;
        printf("%f ",a);
    }
    return 0;
}