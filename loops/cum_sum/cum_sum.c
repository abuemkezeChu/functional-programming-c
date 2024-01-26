#include <stdio.h>
int main()
{
  int cum_sum = 0;
  typedef int counter;
  for (counter i = 1; i <= 100; i++)
  {
    cum_sum = cum_sum + i;
  }
  printf(" cumulative sum = %d\n", cum_sum);
}