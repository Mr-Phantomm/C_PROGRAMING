#include<stdio.h>
void temp(int a,int b){
    int temp;
    temp=a;
    a=b;
    b=temp;
    printf("the value of first after swapping is %d\nthe value of second after swapping is %d",a,b);
}
void wtemp(int a,int b){
    a=b+a;
    b=a-b;
    a=a-b;
    printf("the value of first after swapping is %d\nthe value of second after swapping is %d",a,b);
}
int main(){
    int x,y,z;
    printf("enter the first and second variable");
    scanf("%d %d",&x,&y);
    printf("enter the way which you wanna perform the swapping 1 for using temporary 2 for without temporary");
    scanf("%d",&z);
     if(z==1){
        temp(x,y);
     }   
     if(z==2){
        wtemp(x,y);
     }
}