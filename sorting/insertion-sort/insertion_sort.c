/**
 * implementation of insertion sort algorithm
 *
 * input: array of n integers
 * output: sort in increasing order.
 */

#include <stdio.h>
int main()
{
  int arr[100];
  int arr_size;

  // Ask user to enter the size of the array
  printf("Enter the number of elements you wish to add to your array\n");
  scanf("%d", &arr_size);

  // Fill in arr_size numbers
  printf("Enter %d elements\n", arr_size);
  for (int count = 0; count < arr_size; count++)
  {
    scanf("%d", &arr[count]);
  }

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

    while (j >= 0 && arr[j] > temp)
    {
      arr[j + 1] = arr[j];
      j--;
    }
    arr[j + 1] = temp;
  }

  // display sorted array
  printf("Sorted array-------->   ");
  for (int elt = 0; elt < arr_size; elt++)
  {
    printf("%d\t", arr[elt]);
  }
  printf("\n");

  return (0);
}