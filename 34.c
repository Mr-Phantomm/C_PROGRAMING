#include <stdio.h>
#include <string.h>

int main() {
    int flag;
    char a[100];
    gets(a);
    char b[100];
    for (int i = 0; i < strlen(a); i++) {
        b[i] = a[strlen(a) - 1 - i];
    }
    b[strlen(a)] = '\0'; 
    printf("%s\n", b);
    
        if (a[0]==b[0]){
            for(int j=1;j<strlen(a);j++){
                if(a[j]==b[j]){
                    flag=1;
                    continue;
                    
                }
                else{
                    flag=0;
                    break;
                }
            }
            
        }
    
    if(flag==1){
        printf("it is a palindrome");
    }
    else{
        printf("it is not a palindrome");
    }
}
