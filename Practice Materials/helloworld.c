#include<stdio.h>
#define LOWER 0
#define UPPER 300
#define STEP 20
double fahr2cels (double f)
{
return 5./9. * (f-32);
}
    int main()
{   int fahr;
   for (fahr = LOWER; fahr <= UPPER; fahr += STEP)
{
printf ("Fahr = %4d, \tCels = %7.2f\n", fahr, fahr2cels(fahr));
}
//    scanf ("%d \n" , a);
//    b == ( ( 5 / 9 ) * ( a - 32 ) );
//    printf ("%d \n", b);
    return 0;
}
