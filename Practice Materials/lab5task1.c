#include<stdio.h> 
int main() 
{ 
	int zeros[10]= { 0,0,0,0,0,0,0,0,0 };
	int ones[2] = { 1, 1 };
	int superOnes[5]={ 1,1,1,1,1 };
	int fiboSequence[6]={ 1, 1, 2, 3, 5, 8 };
	int i;
	for (i=0;i<10;i++){
		printf("%d ", zeros[i]);
		}
	printf("\n");	
	for (i=0;i<2;i++){
		printf("%d ",ones[i]);
		}	
	printf("\n");	
	for (i=0;i<5;i++){
		printf("%d ", superOnes[i]);
		}
	printf("\n");	
    for (i=0; i<6; i++){
		printf("%d ", fiboSequence[i]);
		}
	printf("");
		return 0;
}
