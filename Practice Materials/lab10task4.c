#include <stdio.h>
 
int main () {
     here:
     printf("Enter your age:");
     int x;
     scanf("%d",&x);
     if (x>18){
		 printf("Eligible\n");
		 }
	 else{
		printf("not Eligible\n");
		 }	 
		 goto here;
	return 0;
}
