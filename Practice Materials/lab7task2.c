#include <stdio.h>
#include <stdlib.h>

int main()
{
 int * ptr;
 ptr=(int *)malloc(sizeof(int));
 if(ptr != NULL)
        {
        *ptr=200;
        printf("The pointer value is %d \n", *ptr);
        }
 else {
        printf("Memory allocation is not successful");
        }
return 0;
}
