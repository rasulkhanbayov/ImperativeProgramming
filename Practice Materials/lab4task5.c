#include <stdio.h>
int main()
{
int a,b,c,d;
int x=6;
while( x > 5 )
{
scanf("%d\n", &a);
scanf("%d\n", &b);
scanf("%d\n", &c);
scanf("%d", &d);
if (d==0 && c==99){
	printf ("Sum: %d\n", a+b);
	printf ("Sum: %d\n", c+d);
	printf ("Finish");
	}
else if (d==0){
	printf ("Sum: %d\n", a+b);
	printf ("Sum: %d\n", c+d);
	}	
else{
    printf ("Sum: %d\n", a+b+c+d);
}
--x;
}
return 0;

	}
