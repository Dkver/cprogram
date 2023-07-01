#include<stdio.h>
int main(){
    int a;
    printf("enter the 1st side :");
    scanf("%d",&a);
    int b;
    printf("enter the 2nd side :");
    scanf("%d",&b);
    int c;
    printf("enter the 3rd number :");
    scanf("%d",&c);
    if(a+b>c && b+c>a && a+c>b){
        printf("the triangle is valid ");
    }
    else{
        printf("the triangle is invalid ");
    }
        return 0;
}