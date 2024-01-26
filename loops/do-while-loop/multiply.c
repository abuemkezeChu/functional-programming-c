#include <stdio.h>
int main()
{
  int number = 1;
  int mul = 5;
  printf("Multiplication table for 5");
  do
  {
    printf("%d x %d = %d\n", mul, number, mul * number);
    number++;
  } while (number <= 12);
}