#include <stdio.h>

int main()
{   float a;
	scanf("%f", &a);
	a = (int) a;
	if (a>=1 && a<2){
		printf ("Very Bad");
		}
	else if (a>=2 && a<3){
		printf ("Bad");
		}
	else if (a>=3 && a<4){
		printf ("Neutral ");
		}
	else if (a>=4 && a<5){
		printf ("Good ");
		}		
	else if (a>=5 && a<6){
		printf ("Very Good ");
		}		
	else{
		printf ("The number isn't between 1 to 6");
		} 	
	
	return 0;
	}
