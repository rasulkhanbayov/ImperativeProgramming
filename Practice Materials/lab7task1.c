#include <stdio.h>
#include <string.h>
int main(void) {
char t[20] = "ABCDEFGHIJK";
int s = strlen(t); // s = 11
t[3] = '\0';  // t[3]="ABC"
s += strlen(t); // s = 11 + 3 = 14
strcpy(t,"ABCDEF"); // t[6]="ABCDEF"
s += strlen(t); // s = 14 + 6 = 20
strcat(t,"ABC"); // t[9]="ABCDEFABC"
printf("%s \n",t); // "ABCDEFABC"
s += strlen(t); // s= 20 + 9 = 29
printf("%d \n",s); // 29
return 0;
}
