#include <stdio.h>

int main()
{
  char letter;
  printf("Enter a letter: ");
  scanf("%c", &letter);
  switch (letter)
  {

  case 'a':
    printf("You should eat an Apple\n");
    break;

  case 'b':
    printf("You should eat a Banana\n");
    break;

  case 'c':
    printf("You should eat a Cucumber\n");
    break;

  case 'm':
    printf("You should eat a Mellon\n");
    break;

  default:
    printf("You will not eat today\n");
    break;
  }
  return 0;
}