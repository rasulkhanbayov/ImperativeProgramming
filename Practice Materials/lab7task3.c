#include <stdio.h>
#include <stdlib.h>

int main()
{
    int* ptr;
    int n, i, sum = 0;

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
}
    return 0;
}
