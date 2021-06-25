#include <stdlib.h>
#include "main.h"

int main()
{
  const int size = 10;

  int* arr1 = malloc(size * sizeof(int));
  int* arr2 = malloc(size * sizeof(int));
  int* arr3 = malloc(size * sizeof(int) * 2);

  merge2(arr1, size, arr2, size, arr3);

  free(arr1);
  free(arr2);
  free(arr3);
}
