// #include<stdio.h>
// #include<string.h>
// int main(){
//     char main[100];
//     fgets(main,100,stdin);
//     int words=1;
//     int alpabets=0;
//     for(int i=0;i<strlen(main);i++){
//         if((main[i]==' ')){
//             words=words+1;
//         }
//         if(main[i]!=' '){
//             alpabets=alpabets+1;
//         }

//     }
//     printf("no of words is %d\n",words);
//     printf("no of alphabets is %d",alpabets);

// }
// #include<string.h>
// #include<stdio.h>
// #include<ctype.h>
// int main(){
//     char str1[100];
//     char str2[100];
//     int flag=0;
//     fgets(str1,100,stdin);
    
//     fgets(str2,100,stdin);
//     if(strlen(str1)==strlen(str2)){
//      for (int i=0;i<strlen(str1);i++){
//         for(int j=0;j<strlen(str2);j++){
//             if(toupper(str1[i])==toupper(str2[j])){
//                 flag=1;
//                 str2[j]=' ';
//                 break;
//             } 
//             if(str1[i]!=str2[j]){
//                 flag=0;
//             }        
//         }
//      }}
//      if(flag==1){
//         printf("analgams");
//      }
//      if(flag==0){
//         printf("not analgams");
//      }
// }
// #include<stdio.h>
// #include<string.h>
// int main() {
//     char str[1000];
//     fgets(str,1000,stdin);
//     int arr[1000]={0};
//     int words=0;
//     for(int i=0;i<strlen(str);i++){
        
//         if(arr[i]==0){
//             for(int j=0;j<strlen(str);j++){
//                 if(i!=j){
//                     if(str[i]==str[j]){
//                         words=words+1;
//                         arr[i]=words;
//                     }
//                 }
//             }

//         }

//     }
//     for(int j=0;j<strlen(str);j++){
//         if(arr[j]!=0){
//             printf("%c%d",str[j],arr[j]);
//         }
//     }
// 	return 0;
// }
// #include <stdio.h>
// #include <string.h>

// int main() {
//     char str[1000];
//     fgets(str, 1000, stdin);

//     int arr[1000] = {0};
//     int words = 0;

//     // Exclude the newline character
//     int len = strlen(str);
//     if (str[len - 1] == '\n') {
//         str[len - 1] = '\0';
//         len--;
//     }

//     for (int i = 0; i < len; i++) {
        
//         if (arr[i] == 0) {
//             for (int j = 0; j < len; j++) {
//                 if (i != j) {
//                     if (str[i] == str[j]) {
//                         words++;
//                         arr[i] = words;
//                     }
//                 }
//             }
//         }
//     }

//     for (int j = 0; j < len; j++) {
//         if (arr[j] != 0) {
//             printf("%c%d ", str[j], arr[j]);
//         }
//     }

//     return 0;
// }
