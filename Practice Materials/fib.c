#include <stdio.h>
int main()
{
int i = 0;
int F0 = 0;
int F1 = 1;
int nextvalue;
for (i=0; i<10; i++)
{
printf ("%d ", F0);
nextvalue = F0 + F1;
F0 = F1;
F1 = nextvalue;
}
}
