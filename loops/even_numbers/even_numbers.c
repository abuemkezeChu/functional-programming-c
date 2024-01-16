// #include <stdio.h>
// int main()
// {
//   int i = 1;
//   while (i <= 100)
//   {
//     if (i % 2 == 0)
//     {
//       printf("%d", i);
//       i++;
//     }
//   }
// }

// using the for loop
#include <stdio.h>
int main()
{
  for (int i = 2; i <= 100; i = i + 2)
  {
    printf("%d\n", i);
  }
}