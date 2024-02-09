#include<stdio.h>
int main(){
    int q,p,t;
    printf("Quantity and price of materials ");
    scanf("%d %d",&q,&p);
    t=q*p;
    if (t>1000){
        t=9*t/10;

    }
    printf("%d",t);
    

    
}