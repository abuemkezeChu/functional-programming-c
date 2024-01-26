/**
 * convert strings into numerics using inbuilt c libraries atoi and atof
*/

#include<stdio.h>
#include<stdlib.h>

int main(){
  char int_string[] = "1234";
  char float_string[] = "320.5";
  int my_int = atoi(int_string);
  double my_double = atof(float_string);

  printf("int_string = %s, float_string = %s\n", int_string,float_string);
  printf("my_int = %d, my_double = %.1f\n", my_int,my_double);
}