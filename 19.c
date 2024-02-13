#include<stdio.h>
int main(){
    int a,b,c;
    scanf("%d",&a);
    c=1;
    for(b=a;b>0;b--){
        c=c*b;
    
    }
    printf("%d",c);
}