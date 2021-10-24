#include<stdio.h>

int main(){   
	printf("How many elements you want in your array? ");
    int n;
    scanf ("%d", &n);
    int arr[n];
    for (int i = 0 ; i<n ; i++){
		scanf("%d",&arr[i]);
		}
		
    int  *max;
    max = &arr[0];
    for (int i = 1; i < n; i++){
        if (arr[i] > *max){
         int max = &arr[i];
        }
    }
 printf("%d\n", *max);
    return 0;    
}

