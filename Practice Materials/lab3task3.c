#include <stdio.h>

int main(void)
{
int xValue=5;
int yValue= 9;
int result;
int bigResult;
xValue += 3;
yValue -= xValue;
result= yValue*xValue;
result += result;
result -= 1;
yValue = result % result;
result = result+result + xValue;
bigResult= result*result*result;
result += xValue*yValue;
printf ("result: %d\n", result);
printf ("big result: %d\n", bigResult);
return 0;
}
