#include<stdio.h>
int main(){
    int x;
    printf("enter the integer :");
    scanf("%d",&x);
    if(x<0){
        x=x*(-1);
    }
    printf("the absolute value is : %d",x);
    return 0;
}