/*
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main () {
   int val;
   char str[20];
   
   strcpy(str, "98993489");
   val = atoi(str);
   printf("String value = %s, Int value = %d\n", str, val);

   strcpy(str, "tutorialspoint.com");
   val = atoi(str);
   printf("String value = %s, Int value = %d\n", str, val);

   return(0);
}
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main () {
   float val;
   char str[20];
   
   strcpy(str, "98993489");
   val = atof(str);
   printf("String value = %s, Float value = %f\n", str, val);

   strcpy(str, "tutorialspoint.com");
   val = atof(str);
   printf("String value = %s, Float value = %f\n", str, val);

   return(0);
}
