#include <stdio.h>

int findMaxRec(int A[], int n) 
{ 
    if (n == 1) 
        return A[0]; 
    return max(A[n-1], findMaxRec(A, n-1)); 
} 
int max (a,b){
	if (a>b){
		return a;
		}
	else{
	return b;
}	
	}
  
int main() 
{ 
    int A[] = {1, 4, 45, 6, -50, 10, 2}; 
    int n = sizeof(A)/sizeof(A[0]); 
    printf("%d\n",findMaxRec(A, n)); 
    return 0; 
} 
