/**
 * convert strings into numerics using inbuilt c libraries atoi and atof
 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
  char int_string[] = "1234";
  char float_string[] = "320.5";
  int my_int = atoi(int_string);
  double my_double = atof(float_string);

  printf("int_string = %s, float_string = %s\n", int_string, float_string);
  printf("my_int = %d, my_double = %.1f\n", my_int, my_double);

  int a = 2;
  double b = 3.14;
  char myString1[64], myString2[64];
  sprintf(myString1, "%d", a);
  sprintf(myString2, "%.2f", b);
  printf("a=%d, b=%.2f\n", a, b);
  printf("myString1=%s, myString2=%s\n", myString1, myString2);
  return 0;
}