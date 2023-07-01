#include<stdio.h>
int main(){
    int x;
    printf("enter the age of ram :");
    scanf("%d",&x);
    int y;
    printf("enter the age of shyam :");
    scanf("%d",&y);
    int z;
    printf("enter the age of ajay :");
    scanf("%d",&z);
    if(x>y && x>z ){
        printf("ram is youngest");
    }
    if(y>x && y>z ){
        printf("shyam is youngest");
    }
    if(z>y && z>x ){
        printf("ajay is youngest");
    }
        return 0;
}