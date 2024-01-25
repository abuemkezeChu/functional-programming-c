/**
 * implementation of insertion sort algorithm
 *
 * input: array of n integers
 * output: sort in increasing order.
 */

#include <stdio.h>
int main()
{
  int arr[] = {6, 1, 77, 4, 2, 9, 8, 5, 3};
  int arr_size = sizeof(arr) / sizeof(arr[0]);

  // display unsorted array
  printf("Unsorted array--------> ");
  for (int elt = 0; elt < arr_size; elt++)
  {
    printf("%d\t", arr[elt]);
  }
  printf("\n");

  return (0);
}