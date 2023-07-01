#include<stdio.h>
int main(){
    int a,d,n;
    printf("enter the value of a:");
    scanf("%d",&a);
    printf("enter the value of d:");
    scanf("%d",&d);
    printf("enter the value of n:");
    scanf("%d",&n);
    for(int i=a;i<=a+(n-1)*d;i=i+d){
        printf("%d\n",i);
    }
    return 0;
}