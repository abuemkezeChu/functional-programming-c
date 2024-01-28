#include <stdio.h>
int main()
{
  int age = 21;
  // define a pointer pointing to address of age
  int *pAge = &age;

  printf("address of age: %p \n", &age);
  printf("value of pAge: %p\n", pAge);

  // display the value stored at the address stored in pAge
  printf("value of age: %d\n", age);
  printf("value stored at address stored in pAge: %d\n", *pAge);
  // using dereferencing, change the value stored at age
  *pAge = 18;
  printf("New age : %d\n", age);

  return 0;
}