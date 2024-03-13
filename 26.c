#include<stdio.h>
int fun(int arr[],int x,char f){
    int d=0;
    if (f == '+'){
    for(int i=0;i<x;i++){
    d=d+arr[i];
    }
    return d;
    }
    if (f=='-'){
         for(int i=0;i<x;i++){
    d=d-arr[i];
    }
    return d;

    }
    if (f=='*'){
        d=1;
         for(int i=0;i<x;i++){
            
    d=d*arr[i];
    }
    return d;

    }

}
int main(){
int a[4]={1,2,3,4};
char c ;
scanf("%c",&c);
int k=fun(a,sizeof(a[0]),c);
printf("%d",k);

}