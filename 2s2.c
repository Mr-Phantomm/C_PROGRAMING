#include<stdio.h>
#include<string.h>
int main(){
char input[100];
fgets(input,100,stdin);
puts(input);
int x=0;
int y=0;
for(int i=0;i<strlen(input);i++){
   if((input[i]=='A')||(input[i]=='E')||(input[i]=='I')||(input[i]=='O')||(input[i]=='U')||(input[i]=='a')||(input[i]=='i')||(input[i]=='o')||(input[i]=='e')||(input[i]=='u')){
    x=x+1;
   }
   else if((input[i]==' ')||(input[i]=='!')||(input[i]=='@')||(input[i]=='$')||(input[i]=='%')||(input[i]=='^')||(input[i]=='&')){
    continue;
   }
   else{
y=y+1;
   }
}
printf("%d",x);
printf("consonants %d",y-1);
}