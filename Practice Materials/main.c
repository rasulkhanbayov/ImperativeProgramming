#include <stdlib.h>
#include <stdio.h>
int main( int argc, char* argv[] ){
int *nums = (int*)malloc((argc-1)*sizeof(int));
if( NULL != nums ){
int i;
for( i=1; i<argc; ++i ) nums[i] = atoi(argv[i]);
/* TO DO: sort nums */
for( i=1; i<argc; ++i ) printf("%d\n", nums[i]);
free(nums);
return 0;
} else return 1;
}
