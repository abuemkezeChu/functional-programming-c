#include <stdio.h>
int main()
{
  int cum_sum = 0;
  typedef int counter;
  int number;

  printf("Enter a number: ");
  scanf("%d", &number);
  for (counter i = 1; i <= number; i++)
  {
    cum_sum = cum_sum + i;
  }
  printf("The cumulative sum from 1 to %d = %d\n",number, cum_sum);
}