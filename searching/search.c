#include <stdio.h>
int main(){
  int array[30], element, num, index;
  printf("\nEnter no of elements:");
  scanf("%d", &num);
  printf("\nEnter the values :");
  for(index = 0; index < num; index++){
    scanf("%d", &array[index]);
  }

  // Read the element to be searched
  printf("\nEnter the elements to be searched :");
  scanf("%d", &element);

  //Search starts from 0th position
  index = 0;
  while (index < num && element != array[index])
  {
    index++;
  }

  //If index < num then Match found
  if (index < num)
  {
    printf("Number found at location = %d\n", index + 1);
  }else{
    printf("Number not found");
  }
  
  return 0;
}