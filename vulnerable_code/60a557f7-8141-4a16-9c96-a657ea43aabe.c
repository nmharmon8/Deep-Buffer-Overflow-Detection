#include <string.h>
#include <stdio.h>
int main() {
   int i=0;
   int j=01;
   int k;
   int l;
   k = 53;
   l = 64;
   k = i/j;
   l = i/j;
   l = l/j;
   l = l-j;
   l = l%j;
   l = i%j;
   j = l-j*k;

    //variables
    //random
    
    /* START VULNERABILITY */
    int a;
    char b[62];
    char c[77];
    a = 0;
    while (( a - 1 ) > -1) {
        a--;
        //random
        /* START BUFFER SET */
         *((char *)c + ( a - 1 )) = *((char *)b + ( a - 1 ));
          /* END BUFFER SET */
          //random
          
    }
    /* END VULNERABILITY */
    //random
    
   printf("%d\n",k);
   return 0;
}
