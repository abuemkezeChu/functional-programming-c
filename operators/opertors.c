/**
 * trying out the ternary operator
 */

#include <stdio.h>
int main()
{
  int age;
  printf("Enter your age: ");
  scanf("%d", &age);
  age > 18 ? printf("You are an adult\n") : printf("You are a kid\n");
  return 0;
}
