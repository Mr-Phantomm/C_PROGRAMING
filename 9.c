#include<stdio.h>
int main(){
    int sec,min,hr;
    printf("enter the time in seconds");
    scanf("%d",&sec);
    min=sec/60;
    hr=sec/3600;
    printf("min : %d\nhr : %d",min,hr);

}