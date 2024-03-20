#include<stdio.h>
int main(){
    int a,b,d,e,f,q;
    char c,g;
    printf("enter the number of elements you want to put in array");
    scanf("%d",&a);
    int arr[a];
    for (int i=0;i<a;i++){
        printf("enter the element");
        scanf("%d",&b);
        arr[i]=b;
    }
    printf("do you want to add more y/n");
    scanf("%s",&c);
    if (c =='y'){
        printf("how many ");
        scanf("%d",&d);
        for (int j=1;j<=d;j++){
            scanf("%d",&e);
            arr[a+j-1]=e;
            f=a+j;
        }
        for(int k=0;k<f;k++){
        printf("%d ",arr[k]);
        }
    }
    else{
        f=a;
    }
    printf("do you want to search any element???y/n");
    scanf("%s",&g);
    if(g=='y'){
        printf("what is the number you want to search??");
        scanf("%d",&q);
        for(int l=0;l<f;l++){
            if (arr[l]==q){
                printf("the number you written is on %d place",l+1);
            }
        }
    }
    
    
}