#include <stdio.h>
#include <stdlib.h>

int main()
{
   int *arr;

   // malloc() allocate the memory for 5 integers
   // containing garbage values

   arr = (int *)malloc(5 * sizeof(int)); // 5*4bytes = 20 bytes
   // Deallocates memory previously allocated by malloc() function
   free( arr );
   // calloc() allocate the memory for 5 integers and
   // set 0 to all of them
   arr = (int *)calloc(5, sizeof(int));
   // Deallocates memory previously allocated by calloc() function
   free(arr);

   return(0);
}
