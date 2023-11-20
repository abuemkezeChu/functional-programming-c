#include <stdio.h>

const float PI = 3.14; // defining constant PI

int main() {
  float radius, area;

  printf("Enter the radius of the circle: ");
  /*
  %f is one of many format specifiers in c and it simply tells the compiler the type of data to be scanned or printed in input and output operations
  */
  scanf("%f", &radius);

  area = PI * radius * radius;
  printf("The value of radius provided is: %.2f\n", radius);

  printf("The area of the circle is: %.2f\n", area);

  return 0;
}
