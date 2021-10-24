#include <stdio.h>
int main ()
{
int n, reversedInteger = 0, remainder, originalInteger;
scanf("%d ", n);
originalInteger = n;
while (n!=0)
{
remainder = n % 10;
reversedInteger = (reversedInteger*10) + remainder;
n = n /10; 
}
if (originalInteger == reversedInteger){
   printf ("TRUE");
}
else{
   printf ("FALSE");
return 0;
}
}
