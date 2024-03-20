#include<stdio.h>
int main(){
    int a,b,c,d,e,f,q,g;
    int arr[a],rev[a],updtd[a];
    while(1){
        printf("press 1 to make array\n");
        printf("press 2 to display array\n");
        printf("press 3 to reverse the array\n");
        printf("press 4 to add elements in array\n");
        printf("press 5 to search anything in array\n");
        printf("press 6 to delete the element\n");
        printf("press any other number to exit\n");
        scanf("%d",&c);
             if(c==1){
                printf("enter the number of elements you want to put in array\n");
                scanf("%d",&a);
                        for (int i=0;i<a;i++){
                        printf("enter the element\n");
                        scanf("%d",&b);
                        arr[i]=b;
                    }
    }
    if(c==2){
        for(int i=0;i<a;i++){
            printf("%d ",arr[i]);
        }

    }
    if(c==3){
        for(int i=0;i<a;i++){
            rev[i]=arr[a-i-1];
        }
        for(int i=0;i<a;i++){
           printf("%d ",rev[i]); 
        }
    }
    if(c==4){
        if(1){
         printf("how many ");
        scanf("%d",&d);
        for (int j=1;j<=d;j++){
            scanf("%d",&e);
            arr[a+j-1]=e;
            f=a+j;
        }}
        else{
            f=a;
        }
    if(c==5){
         printf("what is the number you want to search??");
        scanf("%d",&q);
        for(int l=0;l<f;l++){
            if (arr[l]==q){
                printf("the number you written is on %d place",l+1);
            }
        }
    }
    if(c==6){
        printf("enter the number you want to delete");
        scanf("%d",&g);
        for( int k=0;k<a;k++){
            if(arr[k]=g){
                updtd[k]=arr[k];
            }
            else{
                continue;
            }
        }
        

    }
    if (c==7){
        break;
    }

}
}
}






































