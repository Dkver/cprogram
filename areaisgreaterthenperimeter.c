#include<stdio.h>
int main(){
    int l,b,a,p;  //l=length,b=bredth,a=area,p=perimeter
    printf("enter the values");
    scanf("%d %d",&l,&b);
    a=l*b;
    p=2*(l+b);
    if(a>p){
        printf("area is greater then perimeter");
    }
    else{
        printf("area is not greater then perimeter");
    }
    return 0;
}