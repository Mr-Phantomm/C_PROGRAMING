#include<stdio.h>
int main(){
    int x,y,c;
    int a;
    printf("enter numbers");
    scanf("%d",&x);
    scanf("%d",&y);
    printf("enter the operator\n1 for +\n2 for -\n3 for * \n4 for /");
    scanf("%d",&a);
    switch (a){
        case 1 :
        c=x+y;
        printf("%d",x+y);
        break;
        case 2 :
        c=x-y;
        printf("%d",c);
         break;
        case 3 :
        c=x*y;
        printf("%d",c);
        break;
        case 4 :
        c=x/y;
        printf("%d",c);
        break;
        default:
        printf("invalid");
    }
}