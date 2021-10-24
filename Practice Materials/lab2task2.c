#include <stdio.h>
int main(void)
{
char firstLetter = 'A';
char firstSmallletter = 'a';
char lastLetter = 'Z';
char LastSmallletter = 'z';

printf("Upper case letters between (and with) '%c' and '%c' is: %d\n", 
lastLetter, firstLetter, lastLetter - firstLetter + 1 );
printf("Lower case letters between (and with) '%c' and '%c' is: %d\n", 
LastSmallletter, firstSmallletter, LastSmallletter - firstSmallletter + 1 );
return 0;
}
