#include <stdio.h>
#define pi 3.14
#define TAB '\t'
int main()
{
int a=85;
int b=075;
int c=0x4B;
printf("################################## \n");
printf("Decimal number:  %d \n" ,  a );
printf("Octal number: %d %c %o \n " , b , TAB , b);
printf("Hexadecimal number: %d %c %x %c %X \n" , c, TAB, c, TAB, c);
printf("##################################\n");
unsigned int d=30u;
long l=30l;
unsigned long ul=30ul;
short s=10;
printf("################################## \n");
printf("Unsigned int number: %u \n ", d);
printf("Long: %ld \n ", l);
printf("Unsigned long int number: %lu  \n ", ul );
printf("Unsigned long int number: %d  \n ", s );
printf("##################################\n");
printf("INT size in byte: %lu \n", sizeof(int) );
printf("LONG size in byte: %lu \n", sizeof(long) );
printf("SHORT size: %lu \n", sizeof(short) );
printf("##################################\n");
float f1=1.1;
double f2=3.2;
printf("##################################\n");
printf("Float %f \n", f1);
printf("Double %lf \n", f2);
printf("##################################\n");
char ch1='A';
char newline='\n';
printf("##################################\n");
printf("Char %c %c ", ch1, newline );
printf("##################################\n");
printf("CHAR size in byte: %lu \n", sizeof(char) );
printf("##################################\n");
const float e=2.7;
printf("PI %.3f \n", pi); 
printf("E number %.3f \n", e);
}
