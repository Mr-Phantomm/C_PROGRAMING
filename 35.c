#include<stdio.h>
int main(){
    struct inte{
        
        int real;
        int comp;
    }a,b,c;
    scanf("%d%d%d%d",&a.real,&a.comp,&b.real,&b.comp);
    c.real=a.real+b.real;
    c.comp=a.comp+b.comp;
printf("%d+i%d",c.real,c.comp);
}