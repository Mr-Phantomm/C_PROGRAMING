#include<stdio.h>
struct arun{
    int arr1[10];
    int arr[10];
}a;
int main(){
   struct arun s1;
   for(int i=0;i<10;i++){
    printf("enter arr");
    scanf("%d",&s1.arr[i]);
   }
   for(int j=0;j<10;j++){
    printf("enter arr1");
    scanf("%d",&s1.arr1[j]);
   }
   
   int testarr[10];

   for(int k=0;k<10;k++){
    int number=0;
    for(int l=0;l<10;l++){
        if(s1.arr1[k]==s1.arr[l]){
            number=number+1;
    }
    if(k!=l){
        if(s1.arr1[k]==s1.arr1[l]){
            number=number+1;
        }
    }
    testarr[k]=number;
    }}
    int max=testarr[0];
    int maxpos;

    for(int z=1;z<10;z++){
        max=(max>testarr[z]?max:testarr[z]);
        if(max==testarr[z]){
            maxpos=z;
        }
    }

    printf("%d",s1.arr1[maxpos]);
   }
   
