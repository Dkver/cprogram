#include<stdio.h>
int main(){
    int sp,cp,p,l;  //sp=sellin price , cp= cost price,p= profit ,l=loss
    printf("enter the values :");
    scanf("%d %d",&sp,&cp);
    if(sp>cp){
        p=sp-cp;
        printf("profit :%d",p);
    }
    if(sp<cp){
         l=cp-sp;
         printf("loss :%d",l);
    }
    if(sp==cp){
        printf("no profit no loss");
    }
        return 0;
}