// #include<stdio.h>
// #include<string.h>

// int main(){
//     char a[1000];
//     fgets(a,1000,stdin);
//     a[strlen(a)-1]='\0';
//     int arrcount[1000]={0};
//     int count=0;

//     for(int i=0;i<strlen(a);i++){
//         int count=0;
//         if(arrcount[a[i]]==0){
//             for(int j=0;j<strlen(a);j++){
                
//                     if(a[i]==a[j]){
//                          count++;
//                     }

//                     arrcount[a[i]]=1;

            
//             }
//             printf("%c%d",a[i],count);
//         }
//     }
// }
// #include<stdio.h>
// int main(){
//     int n;
//     scanf("%d",&n);
//     int arr[n];
//     for(int k=0;k<n;k++){
//         scanf("%d",&arr[k]);
//     }
//     int sum =0;
//     int flag=0;
//     for(int i =0;i<n;i++){
//         flag=0;
//         for(int j=0;j<n;j++){
//             if(i!=j){
//                 if(arr[i]==arr[j]){
//                     flag=1;
//                     break;
//                 }

//             }
//         }
//         if (flag==0){
//             sum=sum+arr[i];
//         }
//     }
//     printf("%d",sum);

// }


// #include<stdio.h>
// int main(){
//     int x=0;
//     int arr[3][3];
//     for(int i=0;i<3;i++){
//         for (int j=0;j<3;j++){
//             scanf("%d",&arr[i][j]);
//         }
//     }
//        for(int i=0;i<3;i++){
//         for (int j=0;j<3;j++){
//             x=x+arr[i][j];
//         }
//     }
//     printf("%d sum is ",x);
// }
// #include<stdio.h>
// int main(){
//     int n;
//     scanf("%d",&n);
//     int arr[n];
//     int arr2[n];
//     for(int i=0;i<n;i++){
//         scanf("%d",&arr[i]);
//     }
//      for(int j=0;j<n;j++){
//         if(j<n-3){
//             arr2[j]=arr[j+1]+arr[j+2]+arr[j+3];
//         }
//         if(j==n-3){
//             arr2[j]=arr[j+1]+arr[j+2]+arr[0];
//         }
//         if(j==n-2){
//             arr2[j]=arr[j+1]+arr[0]+arr[1];
//         }
//         if(j==n-1){
//             arr2[j]=arr[0]+arr[1]+arr[2];
//         }
//      }
//      for(int k=0;k<n;k++){
//         printf("%d ",arr2[k]);
//      }
// }

// #include<stdio.h>
// #include<string.h>
// int main(){
//     char str[100];
//     fgets(str,100,stdin);
    
//     int arr[100]={0};
//     for(int i=0;i<strlen(str);i++){
//         if(arr[str[i]]==0){
//             for(int j=0;j<strlen(str);j++){
                
//                     if(str[i]==str[j]){
//                         arr[str[i]]=1;
//                     }
                
//             }
//             if(arr[str[i]]==1){
//                 printf("%c",str[i]);
//             }
//         }
//     }
// }
#include<stdio.h>
int main(){
    int arr[5];
    int max=arr[0];
    int max2;
    for(int i=0;i<5;i++){
        scanf("%d",&arr[i]);

    }
    for(int j=1;j<5;j++){
        max=(max>arr[j]?max:arr[j]);
    }
    for(int j=1;j<5;j++){
        if(arr[j]!=max){
        max2=(max2>arr[j]?max2:arr[j]);
    }}
    printf("%d\n%d",max,max2);

}