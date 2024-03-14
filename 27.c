#include<stdio.h>
int main(){
    int arr[4]={1,2,3,4};
    int arr2[4];
    for (int i=0;i<4;i++){
        arr2[i]=arr[3-i];
    }
    for (int i=0;i<4;i++){
    printf("%d ",arr2[i]);
    }
    return 0;
}