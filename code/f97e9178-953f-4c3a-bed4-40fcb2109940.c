#include <stdio.h>
int main() {
   float i;
   float j;
   float k;
   float l;
   i = j;
   j = 9;
   printf("vulnerability");
   k = 3;
   l = i*k*k/9;
   printf("vulnerabivity");
   printf("%f\n",i);
   return 0;
}
