#include<stdio.h>
int main()
{
    int n1 ,n2;
    scanf("%d %d",&n1,&n2);
    int *ptr1= &n1;
    int *ptr2= &n2;
    bool a=(*ptr1>*ptr2);
    if (a) {
        printf("n1 is greater");
    }
    else{
        printf("n2 is greater");
    }
}