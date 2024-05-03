#include<stdio.h>
struct ar {
    
 int arr1[10];
 int arr2[10];

}a;

int main(){
    int count=0;
    int x;
    printf("how many numbers you want to input");
scanf("%d",&x);
    for(int i=0;i<x;i++){
        printf("for arr1");
        scanf("%d",&a.arr1[i]); 
        }
for(int i=0;i<x;i++){
    printf("for arr2");
        scanf("%d",&a.arr2[i]); 
        }
int counted[100]={0};
for(int i=0;i<x;i++){
    count=0;
    if(counted[a.arr1[i]]==0){
    for(int j=0;j<x;j++){
        if(a.arr1[i]==a.arr1[j]){
            count=count+1;
        }
        else{
            continue;
        }
        counted[a.arr1[i]]=1;

    }
    printf("%d is %d times arr1\n",a.arr1[i],count);
    }
    }
int counted1[100]={0};
for(int i=0;i<x;i++){
    count=0;
    if(counted1[a.arr2[i]]==0){
    for(int j=0;j<x;j++){
        if(a.arr2[i]==a.arr2[j]){
            count=count+1;
        }
        else{
            continue;
        }
        counted1[a.arr2[i]]=1;

    }
    printf("%d is %d times arr2\n",a.arr2[i],count);
    }
    }
}