#include<stdio.h>
#include<strings.h>
int main(){
    char a[100],b;
    int c,i,j,k;
    k=0;
printf("enter the string");
gets(a);
printf("enter the sub string");
scanf("%c",&b);
while(a[i] != '\0'){
    if(b==a[i]){
        k=k+1;
    }
    
i++;
}
printf("%d",k);
return 0;
}

// #include <string.h>
// #include<stdio.h>

// int main() {
//     char a[100], b;
//     int k = 0;
//     printf("Enter the string: ");
//     gets(a);
//     printf("Enter the character to search for: ");
//     scanf(" %c", &b); 

//     for (int i = 0; a[i] != '\0'; i++) {
//         if (a[i] == b) {
//             k++;
//         }
//     }

//     printf("The character '%c' appears %d times in the string.\n", b, k);
//     return 0;
// }
