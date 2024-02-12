#include<stdio.h>
int main(){
    int n;
    printf("enter the age ");
    scanf("%d",&n);
    switch (n){
        case 17:
        printf("chota hai re tu");
        break;
        case 18:
        printf("dede vote");
        break;
        default:
        printf("17 se upar vote de sakta hai re tu");
    }

}