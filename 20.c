#include<stdio.h>
int main(){
    int i,j,k;
    scanf("%d",&k);
    for (i=1;i<=k;i++)
    {
        for (j=i;j<=k;j++)
        {
            printf("%c",('E'-i)+1);
        }
        printf("\n");
    }
}