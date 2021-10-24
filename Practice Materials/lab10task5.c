#include <stdio.h>
 
int main () {

  char a,b,c;
  a = b = c;
  printf("%s \n", a==(b-1) ?  ":)"   :    ":("   );
  return 0;
}
