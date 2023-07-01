#include <stdio.h>
int main()
{
    int x;
    printf("enter the percentage :");
    scanf("%d", &x);
    // more then 80-> a
    // more then 60-> b
    // more then 40-> c
    // less then 40-> d
    // if (x > 80)
    // {
    //     printf("A grade\n");
    // }
    // else if (x > 60)
    // {
    //     printf("B grade\n");
    // }
    // else if (x > 40)
    // {
    //     printf("C grade\n");
    // }
    // else{
    //     printf("D grade\n");
    // }
    if(x>80){
        printf("A grade\n");
    }
    else{
        if(x>60){
            printf("B grade\n");
        }
        else{
            if(x>40){
                printf("C grade\n");
            }
            else{
                printf("D grade");
            }
        }
    }
    return 0;
}