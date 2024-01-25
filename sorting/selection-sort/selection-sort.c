#include <stdio.h>
int main()
{
  int array[] = {15, 28, 17, 12, 18, 9, 6};
  int array_size = sizeof(array) / sizeof(array[0]);
  printf("Unsorted array\n");
  for (int el = 0; el < array_size; el++)
  {
    printf("%d\t", array[el]);
  }
  printf("\n");

  // iterate through the array
  for (int i = 0; i < array_size - 1; i++)
  {
    // for each iteration, perform a swap
    int min_value = i;
    for (int j = i + 1; j < array_size; j++)
    {
      if (array[min_value] > array[j])
      {
        min_value = j;
      }
    }
    // swap value at position i with that at position min_value
    int temp = array[i];
    array[i] = array[min_value];
    array[min_value] = temp;
  }
  // display the sorted array
  printf("Sorted array\n");
  for (int el = 0; el < array_size; el++)
  {
    printf("%d\t", array[el]);
  }
  printf("\n");
}