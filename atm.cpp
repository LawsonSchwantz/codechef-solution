#include <stdio.h>
#include <string.h>


 
int main()
{
    
    int x;
   float y;
   scanf("%d %f", &x, &y);
   if (x <= (y - 0.5) && x%5 == 0){
        printf("%.2lf", y - x - 0.5);
   }else{
       printf("%.2lf", y);
   }

    return 0;
}
