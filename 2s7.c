#include<stdio.h>
int main(){
    int arr[100];
    arr[0]=0;
arr[1]=1;
    for(int i=2;i<10;i++){
        arr[i]=arr[i-1]+arr[i-2];
        printf("%d ",arr[i]);
    }
}