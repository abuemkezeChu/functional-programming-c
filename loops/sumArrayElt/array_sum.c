#include <stdio.h>

int numbers[30], sum = 0, i, size;
int main()

{
  printf("Enter number of elements: ");
  scanf("%d", &size);
  // Populate the array with elements from user

  printf("Enter %d elements\n", size);

  for (int j = 0; j <= size - 1; j++)
  {
    scanf("%d", &numbers[j]);
  }

  for (i = 0; i <= sizeof(numbers - 1); i++)
  {
    sum = sum + numbers[i];
  }
  printf("Sum: %d\n", sum);
}
