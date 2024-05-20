#include<stdio.h>
int main(){
    int n;
    printf("enter the number of elements of array");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int count=0;
    int number;
    int arr2[100]={0};
    int arr3[100][100]={0};
    
    for(int i=0;i<n;i++){
        int k=0;
        count=0;
        if(arr2[arr[i]]==0){
            number=arr[i];
        for(int j=0;j<n;j++){
            
            if(arr[j]==number){
                count=count+1;
                // printf("%d comes on  %d position",number,j);
                k=k+1;
                arr3[number][k]=j+1;
            }
            }
             arr2[arr[i]]=1;
            if(arr2[arr[i]]==1){
            printf("%d comes %d times\n",arr[i],count);
            }
        }
        else{
            continue;
        }
       }  
       int z;
       printf("to find on which positions number was present");
       scanf("%d",&z);
       int t=1;
       while(arr3[z][t]!=0){
        printf("%d\n",arr3[z][t]);
        t=t+1;
       }

}
// #include <stdio.h>

// int main() {
//     int n;
//     printf("Enter the number of elements in the array: ");
//     scanf("%d", &n);

//     int arr[n];
//     for (int i = 0; i < n; i++) {
//         scanf("%d", &arr[i]);
//     }

//     int count = 0;
//     int number;
//     int arr2[100] = {0};
//     int arr3[100][100] = {0};

//     for (int i = 0; i < n; i++) {
//         int k = 0;
//         count = 0;

//         if (arr2[arr[i]] == 0) {
//             number = arr[i];

//             for (int j = 0; j < n; j++) {
               

//                 if (arr[j] == number) {
//                     count++;
//                     // printf("%d comes on %d position", number, j);
//                     k++;
//                     arr3[number][k] = j + 1;
//                 }
//             }

//             arr2[arr[i]] = 1;

//             if (arr2[arr[i]] == 1) {
//                 printf("%d comes %d times\n", arr[i], count);
//             }
//         } else {
//             continue;
//         }
//     }

//     int z;
//     printf("Enter the number to find on which positions it was present: ");
//     scanf("%d", &z);

//     int t = 1;
//     while (arr3[z][t] != 0) {
//         printf("%d\n", arr3[z][t]);
//         t++;
//     }

//     return 0;
// }
