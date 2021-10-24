#include <stdio.h>
#include <stdlib.h>

int main()

{   
	char* ptr;
    int n;

	printf("Enter number of elements:");
    scanf("%d", &n);
    if (n>1024*1024){
		printf("Too much memory requsted \n");
		exit(0);
		}
	ptr = (char*)calloc (400,sizeof(char));	
	if (ptr == NULL) {
        printf("Memory not allocated.\n");
        exit(0);
    }
    if (n >= 400) {
		n=400;
	}
	char c ='A';
    for(int z=1; z<=n; z++){
       printf("%c", c);
       if (z % 40 == 0){
		   printf("\n");
		   }
       if (c=='Z'){
		   c='A'-1;
		   }
       c++;
    }

    
	return 0;
}
