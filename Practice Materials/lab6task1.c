#include <stdio.h>
void swap(int *a, int *b){
	 int temp = *a;
    *a = *b;
    *b = temp;
	}
int main(){
	int a, b ; 
    printf("First number: "); 
    scanf("%d", &a); 
    printf("Second number: "); 
    scanf("%d", &b); 
    swap(&a,&b);
printf("a = %d, b = %d", a, b); 
    
	return 0;
	}
