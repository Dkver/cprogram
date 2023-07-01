#include<stdio.h>
int main(){
    int a,b;
    printf("enter the value of a:");
    scanf("%d",&a);
    printf("enter the value of b:");
    scanf("%d",&b);
    int i;
    int power=1;
    for(i=1;i<=b;i++){
        power=power*a;
    }
    
        printf("the value of a raise to the power b is :%d",power);
    return 0;
}