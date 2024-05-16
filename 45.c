// #include<stdio.h>
// int main(){
//     // int a=5;
//     int *ptr;
//     scanf("%d",ptr);
//     printf("%d",&ptr);
// }
#include <stdio.h>
#define CUBE(x) x * x * x
void solve() {
    int ans = 216 / CUBE(3);
    printf("%d", ans);
}
int main() {
    solve();
	return 0;
}