void copyArray(int from[], int* to, int size)
{
  for (int i = 0; i < size; ++i)
    to[i] = from[i];
}

void sort(int arr[], int size)
{
  for (int j = size - 1; j > 0; --j)
    for (int i = 0; i < j; ++i)
      if (arr[i] > arr[i + 1])
      {
        int temp = arr[i];
        arr[i] = arr[i + 1];
        arr[i + 1] = temp;
      }
}

void merge(
  int arr1[], int size1,
  int arr2[], int size2,
  int result[])
{
  copyArray(arr1, result, size1);
  copyArray(arr2, result + size1, size2);

  sort(result, size1 + size2);
}

void merge2(
  int arr1[], int size1,
  int arr2[], int size2,
  int result[])
{
  int i = 0;
  int j = 0;
  int k = 0;

  while (i < size1 || j < size2)
    if (i == size1)
      result[k++] = arr2[j++];
    else if (j == size2)
      result[k++] = arr1[i++];
    else if (arr1[i] < arr2[j])
      result[k++] = arr1[i++];
    else
      result[k++] = arr2[j++];
}
