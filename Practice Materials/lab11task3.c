#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(int argc, char *argv[]) {
	int result;
	int result1;
	int result2;
	result1=atoi(argv[2]);
	result2=atoi(argv[3]);
	if (argc==4){
		if (strcmp(argv[1],"add") == 0){
			
			result=result1+result2;
			}
			if (strcmp(argv[1],"sub") == 0){
			
			result=result1-result2;
			}
			if (strcmp(argv[1],"mul") == 0){
			
			result=result1*result2;
			}		
			/*else{
			printf("Wrong input");
			}	*/			
		}
		else{
			printf("Wrong input");
			}
		printf("%s %s %s : %d\n",argv[1],argv[2],argv[3],result);
	return 0;
}
