#include <string.h>
#include <stdio.h>
int main() {
   int i=4;
   int j=01;
   int k;
   int l;
   k = 53;
   k = 64;
   k = i/j;
   l = i/j;
   l = i/j;
   l = i/j;
   l = k%j;
   l = j%j;
   k = k-k*i;

    //variables
    //random
    
    /* START VULNERABILITY */
    int a;
    int b[37];
    int c[38];
    a = 0;
    while (( a - 1 ) < strlen(b)) {
        a++;
        /* START BUFFER SET */
         *((int *)c + ( a - 1 )) = *((int *)b + ( a - 1 ));
          /* END BUFFER SET */
          //random
          
    }
    /* END VULNERABILITY */
    
   printf("%d%d\n",k,l);
   return 0;
}
