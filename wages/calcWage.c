#include <stdio.h>

int hours, rate, wages;

int main(int argc, char const *argv[])
{
  printf("------Program to calculate someones wages------");

  printf("\nPlease enter the number of hours worked you bollo today: ");
  scanf("%d", &hours);
  printf("Enter your rate per hour: \n");
  scanf("%d", &rate);

  wages = rate * hours;
  printf("Your wages for today (based of the number of hours worked) is: %d\n", wages);

  return 0;
}
