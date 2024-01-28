#include <stdio.h>
int main()
{
  int array[9] = {35, 56, 54, 32, 67, 89, 90, 32, 21};
  printf("Normal array is ->");
  for (int i = 0; i <= 9 - 1; i++)
  {
    printf("%d | ", array[i]);
  }
  printf("\n");
  printf("Reversed array is -> ");
  for (int i = 9 - 1; i >= 0; i--)
  {
    printf("%d | ", array[i]);
  }
  printf("\n");
  return 0;
}