#include <stdio.h>
#include <stdlib.h>

int main()
{
    int* ptr;
    int z, n, i;

    printf("Enter number of elements:");
     scanf("%d", &n);

    ptr = (int*)malloc( n * sizeof(int)); // points to beginning of block
    printf("Address of first block: %d \n", ptr); 
    
    if (ptr == NULL) {
        printf("Memory not allocated.\n");
        exit(0);
    }
    else {
        printf("Memory successfully allocated using malloc.\n");

        for (i = 0; i < n; ++i)  {
                  *(ptr+i) = i + 1;
                  //ptr[i]=i+1; 
                printf("Address of %d element is: %d \n" , i , ptr+i);
        }

        printf("The elements of the array are: ");

        for (i = 0; i < n; ++i) {
            printf("%d  ", *(ptr+i));
            //printf("%d, ", ptr[i]);
        }
        printf("\nEnter new number of elements you want to extend:");
        scanf("%d", &z); 
        printf("Enter the new size of the array: %d\n", z); 
   
        ptr = realloc(ptr, (z + n) * sizeof(int)); 
        printf("Address of first block: %d \n", ptr);

        printf("Memory successfully re-allocated using realloc.\n"); 
        for (i = n; i < (z+n); ++i) { 
            *(ptr+i) = i + 1; 
            printf("Address of %d element is: %d \n" , i , ptr+i);
        } 
        printf("The elements of the new array are: ");
        for (i = 0; i < (n+z); ++i) {
            printf("%d  ", *(ptr+i));
            //printf("%d, ", ptr[i]);
        }
        }
    return 0;
}

