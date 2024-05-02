#include<stdio.h>
int main(){
    int n=100;
    int arr[n];
    arr[0]=0;
    arr[1]=1;
    arr[2]=1;

    for(int i=3;i<n;i++){
        arr[i]=arr[i-1]+arr[i-2];
    }
    int b1,b2;
    printf("meters and bricks size");
    scanf("%d %d",&b1,&b2);
    int a=b1/b2;
    int x;
    for (int j=0;j<n;j++){
        if(arr[j]<=b1){
            x=j;
            
        }
        else if(arr[j]>b1){
break;
        } 
        else{
            continue;
        }
}
    int total=0 ;
    for (int k=x;k>0;k--){
        total=total+arr[k];
    }
    printf("total no of bricks %d",total);
    printf("base bricks %d",arr[x]);


}