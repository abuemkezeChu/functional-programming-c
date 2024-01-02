#include <stdio.h>

// main function
int main()
{
  int array[] = {20, 4, 6, 10, 8, 22, 14, 16, 18, 2};
  int array_size = sizeof(array) / sizeof(array[0]);
  int temp;
  int index;

  // display array contents
  printf("Unsorted array: ");
  for (int i = 0; i <= array_size; i++)
  {
    printf("%d\t", array[i]);
  }

  // perform sorting using the bubble sort principle
  for (int range = array_size; range >= 1; range--) // set range
  {
    for (index = 0; index < range; index++) // starts with first element in array
    {
      if (array[index] > array[index + 1])
      {
        // swap
        temp = array[index];
        array[index] = array[index + 1];
        array[index + 1] = temp;
      }
    }
  }
  printf("\nSorted array: \t");
  for (int i = 0; i < array_size; i++)
  {
    printf("%d\t", array[i]);
  }
}
