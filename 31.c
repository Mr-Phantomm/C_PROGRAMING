#include<stdio.h>
#include<string.h>

// char rev(char *str2){
//     char i=0;
//     char revl[4];
//     while( str2[i]!='/0'){
//         printf("%c",&str2[i]);
//         i++;
//     }
// }


void rev(char *str) {
    for (int i = 3; i >= 0; i--) {
        printf("%c", str[i]);
    }
}

int main() {
    char str[4] = "AMIT";
    rev(str);
    return 0;
}

    

