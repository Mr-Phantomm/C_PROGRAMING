#include<stdio.h>
#include<string.h>

int main(){
    char a[1000];
    fgets(a,1000,stdin);
    int arrcount[1000]={0};

    for(int i=0;i<strlen(a);i++){
        if(arrcount[i]==0){
            for(int j=0;j<strlen(a);j++){
                
                    if(a[i]==a[j]){
                         arrcount[i]+=1;
                    }
            
            }
        }
    }
    for(int k=0;k<strlen(a);k++){
        if(arrcount[k]!=0){
        printf("%c%d",a[k],arrcount[k]);
        }
    }
    
    }
