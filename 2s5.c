#include<stdio.h>
#include<string.h>
int main(){
    char string[100];
    fgets(string,100,stdin);
    int x= strlen(string)-1;
    int count=0;
    printf("%d",x);
    for(int i=0;i<x;i++){
        if(string[i]==string[x-i-1]){
            count=1;
        }
        else {
            count=0;
            break;
        }
    }
    if(count==1){
        printf("palindrome");
    }
    if(count==0){
printf("not palimdrome");
    }
}