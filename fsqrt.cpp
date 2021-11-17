#include<stdio.h>
#include<string.h>
#include <math.h>
 
int main(){
    
    int t;
    scanf("%d", &t);
    for(int i = 0; i < t; i++){
        double N;
        scanf("%lf", &N);
        printf("%.0lf\n", sqrt(N));
    }
 return 0;
}
