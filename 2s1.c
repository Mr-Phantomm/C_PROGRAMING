#include<stdio.h>
int main(){
    printf("enter the size of array");
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        printf("enter the number %d  ",i+1);
        scanf("%d",&arr[i]);
     }
int min=arr[0];
int max=arr[0];
    for(int i=1;i<n;i++){
         min=(min<arr[i]?min:arr[i]);
         max=(max>arr[i]?max:arr[i]);
}
printf("smallest number is %d\nmax number is %d",min,max);

    
}