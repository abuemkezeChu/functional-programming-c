#include <stdio.h>

const float PI = 3.14159; // defining constant PI

int main() {
  float radius, area;

  printf("Enter the radius of the circle: ");
  scanf("%f", &radius);

  area = PI * radius * radius;

  printf("The area of the circle is: %f\n", area);

  return 0;
}
