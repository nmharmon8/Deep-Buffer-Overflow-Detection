#include <string.h>
#include <stdio.h>
int main() {
   int i=4;
   int j=134;
   int k;
   int l;
   j = 533;
   l = 64;
   k = i/j;
   l = i/j;
   l = l/j;
   l = j%j;
   l = i%j;
   j = k-k*i;

    //variables
    //random
    
    /* START VULNERABILITY */
    int a;
    long b[21];
    long c[77];
    a = 0;
    while (b[a] != 0) {
        /* START BUFFER SET */
         *((long *)c + a) = *((long *)b + a);
          /* END BUFFER SET */
          a++;
          
    }
    /* END VULNERABILITY */
    
   printf("%d%d\n",i,l);
   return 0;
}
