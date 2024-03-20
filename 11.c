#include<stdio.h>
void replace(int a,int b)
{
    
    
    a=a+b;
    b=a-b;
    a=a-b;
   
    printf("%d,%d",a,b);

}
int main(){
    replace(10,3);
}