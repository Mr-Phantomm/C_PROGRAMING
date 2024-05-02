#include<stdio.h>
int main(){
    int a=0,b=1;
    int c=0;
    int n;
    scanf("%d",&n);
    int i=0;
    while(i<n){
        printf("%d",c);
        a=b;
        b=c;
        c=a+b;
        i++;
    }

}