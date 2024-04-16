#include<stdio.h>

int main(){
    struct num{
        int real;
        int comp;
    }n1,n2;
    scanf("%d%d%d%d",&n1.real,&n1.comp,&n2.real,&n2.comp);
    printf("sum= %d+i%d",(n1.real+n2.real),(n1.comp+n2.comp));

}