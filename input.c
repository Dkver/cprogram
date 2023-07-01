#include<stdio.h>
int main(){
     int a,b;  //a>b
    printf("enter dividend :");
    scanf("%d",&a);
    printf("enter divisor :");
    scanf("%d",&b);
   
   int r=a%b;
   printf("the remainder when %d is divided by %d :%d",a,b,r);
    return 0;
    }