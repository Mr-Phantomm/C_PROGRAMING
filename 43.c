#include<stdio.h>
int main(){
    int arr[10];
    int max=0;
    
    for(int i=0;i<10;i++){
        scanf("%d",&arr[i]);
        //  max=(max>arr[i]?max:arr[i]);
    }
    for(int i=0;i<10;i++){
        
        for(int j=0;j<10;j++){
            if(i!=j){
                if(arr[i]<arr[j]){
                    break;
                }
                if(arr[i]>arr[j]){
                    max=arr[i];
                }
            }
        }
    }  
    int revmax=0;
    int n=max;
    int arm=0;
    
    while(n>0){
        int digit=n%10;
        arm=arm+(digit*digit*digit);
        revmax=revmax*10+digit;
n=n/10;

    } 
    printf("%d\n",max);
    printf("%d\n",revmax);
    if(revmax==max){
        printf("palindrome\n");

    }
    else{
        printf("not palindrome\n");
    }
    if(arm==max){
        printf("armstrong");
    }



}