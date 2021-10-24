#include <stdio.h> 
void swap(int *a, int *b){
	 int temp = *a;
    *a = *b;
    *b = temp;
	}
	
 int main() {   
	 printf("How many elements you want in your array? ");
    int n;
    scanf ("%d", &n);
    int arr[n];
    for (int i = 0 ; i<n ; i++){
		scanf("%d",&arr[i]);
		}
  int *z = arr;
  int i,j; 
    for (i = 0; i < n; i++) { 
      for (j = i + 1; j < n; j++) { 
         if (arr[j] < arr[i]) { 
                 swap(&arr[i],&arr[j]);
            } 
        } 
    } 
    for (i = 0; i < n; i++) 
        printf("%d ", *(z + i)); 
    return 0; 
} 
