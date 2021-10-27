#include <stdio.h>
#include <string.h>


 
int main()
{
    
 int t;
   scanf("%d", &t);
    for (int i; i < t; i++){
        int n;
        scanf("%d", &n);
        int ans = 0;
        while (n > 0){
            ans += n % 10;
            n /= 10; 
        }
        printf("%d\n", ans);
    }

    return 0;
}
