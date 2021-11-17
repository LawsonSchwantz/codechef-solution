#include<stdio.h>
#include <string.h>

int main() {
    int t;
    scanf("%d", &t);
    for(int i = 0; i < t; i++){
        long long int a, b, c, ans;
        scanf("%lld %lld %lld", &a, &b, &c);
        if (a > b && b > c || b < c && a < b){
            ans = b;
        } else if (a < b && a > c || a < c && b < a){
            ans = a;
        } else if(a < c && b > c || a > c && b < c){
            ans = c;
        }
      printf("%lld\n", ans);  
    }
    return 0;
}
