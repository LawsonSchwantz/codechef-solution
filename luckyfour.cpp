#include <stdio.h>
#include <string.h>


int main(){

   int t;
   scanf("%d", &t);
   while(t--){
       int n, ans = 0;
       scanf("%d", &n);
       while (n>0){
           if (n%10==4){
               ans++;
           }
           n /= 10;

       }
       printf("%d\n", ans);
   }

    return 0;
