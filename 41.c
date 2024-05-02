#include<stdio.h>
int main(){
    int j;
    char h[2];
    h[0]='a';
    for (j=2;j>0;j--){
        h[1]='1'+j;
        printf("%s",h);
    }
}
