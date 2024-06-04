#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    int v=0;
    int c=0;
    int d=0;
    int s=0;
    fgets(str,100,stdin);
   
    for(int i=0;i<strlen(str);i++){
        if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'||str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U'){
            v=v+1;
        }
        else if(str[i]==' '){
            s=s+1;
        }
        else if(str[i]=='0'||str[i]=='1'||str[i]=='2'||str[i]=='3'||str[i]=='4'||str[i]=='5'||str[i]=='6'||str[i]=='7'||str[i]=='8'||str[i]=='9'){
            d=d+1;
        }
        else{
            c=c+1;
        }
    }
    printf("vowel is %d\nconsonant is %d\nspace is %d\ndigit is %d",v,c,s,d);
}