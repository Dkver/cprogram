#include<stdio.h>
int main(){
    int hard,ts;
    float cc;
    printf("enter the hardness, tensile strength,carbon content");
    scanf("%d%d%f",&hard,&ts,&cc);
    if(hard>50&&cc<0.7&&ts<5600)
        printf("grade 10\n");
        else if(hard>50&&cc<0.7&&!(ts<5600))
        printf("grade 9\n");
        else if(!(hard>50)&&cc<0.7&&ts<5600)
        printf("grade 8\n");
        else if(hard>50&&!(cc<0.7)&&ts<5600)
        printf("grade 7\n");
        else if(hard>50||cc<0.7||ts<5600)
        printf("grade 6\n");
        else
        printf("grade 5\n");
         return 0;
}