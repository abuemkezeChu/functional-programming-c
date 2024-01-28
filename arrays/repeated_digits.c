#include <stdio.h>
int main()
{
  int seen[10] = {0};
  int rem, N;
  printf("Enter a number: ");
  scanf("%d", &N);

  while (N > 0)
  {
    rem = N % 10; // divide the number by 10 and store the remainder
    // check if the value at seen{rem} = 1
    if (seen[rem] == 1)
      break;

    seen[rem] = 1;
    N = N / 10; // integer division-> the fraction part is truncated
  }

  if (N > 0)
  {
    printf("Yes\n");
  }
  else
  {
    ("No\n");
  }
}