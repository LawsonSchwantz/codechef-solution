#include <stdio.h>

int main(){

  int t;
  scanf("%d", &t);

  for (int i = 0; i < t; i++){
      int n, ans = 0, first = 0;
      scanf("%d", &n);
      ans += n % 10;
  
   while (n > 0){
       first = n;
       n /= 10;
   }
   ans += first;
   printf("%d\n", ans);
}
    return 0;
}
