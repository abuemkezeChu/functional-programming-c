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

  // main logic of insertion sort

  for (int i = 1; i < arr_size; i++)
  {
    int temp = arr[i];
    int j = i - 1;

    while (j <= 0 && arr[j] < temp)
    {
      arr[j + 1] = arr[j];
      j--;
    }
    arr[j + 1] = temp;
  }

  // display sorted array
  printf("Sorted array--------> ");
  for (int elt = 0; elt < arr_size; elt++)
  {
    printf("%d\t", arr[elt]);
  }
  printf("\n");

  return (0);
}