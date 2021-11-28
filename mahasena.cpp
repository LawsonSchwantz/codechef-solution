#include <stdio.h>

int main(void) {
    
    int t, a = 0, b = 0;
    scanf("%d", &t);
    while(t--){
        int n;
        scanf("%d", &n);
        if(n % 2 == 0){
            a++;
        }else{
            b++;
        }
    }
        if(a > b){
            printf("READY FOR BATTLE\n");
        }else{
            printf("NOT READY\n");
        }
    
    return 0;
}
