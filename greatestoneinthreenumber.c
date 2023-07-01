#include<stdio.h>
int main(){
    int a;
    int b;
    int c;
    int d;
    printf("enter the 1st number :");
    scanf("%d",&a);
    printf("enter the 2nd number :");
    scanf("%d",&b);
    printf("enter the 3rd number :");
    scanf("%d",&c);
    printf("enter the 4th number :");
    scanf("%d",&d);
    if(a>b && a>c && a>d){
        printf("the greatest number is :%d",a);
    }
    if(b>a && b>c && b>d){
        printf("the greatest number is :%d",b);
    }
    if(c>a && c>b && c>d){
        printf("the greatest number is :%d",c);
    }
    if(d>a && d>b && d>c){
        printf("the greatest number is :%d",a);
    }
    return 0;
}
   