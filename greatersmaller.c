#include<stdio.h>
int main(){
    int n;
    printf("enter the number");
    scanf("%d",&n);
    if(n>99||n<999){
        printf("numberis three digit");
    }
    else{
        printf("number is not three digit");
    }
    return 0;
}