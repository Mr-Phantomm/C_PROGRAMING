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
    for(int i=0;i<n;i++){
        count=0;
        if(arr2[arr[i]]==0){
            number=arr[i];
        for(int j=0;j<n;j++){
            if(arr[j]==number){
                count=count+1;
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

//     for (int i = 0; i < n; i++) {
//         count = 0;

//         if (arr2[arr[i]] == 0) {
//             number = arr[i];

//             for (int j = 0; j < n; j++) {
//                 if (arr[j] == number) {
//                     count++;
//                 }
//             }

//             arr2[arr[i]] = 1;

//             if (arr2[arr[i]] == 1) {
//                 printf("%d appears %d times\n", arr[i], count);
//             }
//         } else {
//             continue;
//         }
//     }

//     return 0;
// }
