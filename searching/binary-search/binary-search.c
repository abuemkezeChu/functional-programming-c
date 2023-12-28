#include <stdio.h>

// main logic
int binarySearch(int array[], int first, int last, int search)
{
  while (first <= last)
  {
    int mid = first + last / 2;

    if (array[mid] == search)
    {
      return mid;
    }

    if (array[mid] < search)
    {
      first = mid + 1;
    }
    else
    {
      last = mid - 1;
    }
  }
  return -1;
}

int main()
{
  int array[] = {1, 2, 3, 4, 5, 6, 7, 8, 9,10};
  int array_size = sizeof(array) / sizeof(array[0]);
  int search;

  printf("Enter element to searched: ");
  scanf("%d", &search);

  int result = binarySearch(array, 0, array_size - 1, search);

  if (result == -1)
  {
    printf("Element not found\n");
  }
  else
  {
    printf("Element %d found at index %d\n", search, result+1);
  }
  
}
