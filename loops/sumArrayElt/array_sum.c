#include <stdio.h>

int array[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0};
int sum = 0;
int index;
int main()
{
  for (index = 0; index <= sizeof(array - 1); index++)
  {
    sum = sum + array[index];
    printf("Sum: %d", sum);
  }
}
