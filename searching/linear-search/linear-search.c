#include <stdio.h>
int main(){
  int array[] = {1,21,13,4,5,6,7,8,89,50,22,12,30,24,41,101,32};
  int array_size = sizeof(array)/sizeof(array[0]);
  int index = 0; 
  int search;
  printf("Number of elements in array =>  %d\n", array_size);
  printf("Enter the element to be searched: ");
  scanf("%d",&search);
  
    while (index < array_size && search != array[index]) {
      index++;
    }

    if (index < array_size){
      printf("\nElement %d found at position %d\n", search,index+1);
    }else{
      printf("\nSorry, %d not found in array\n", search);
    }

}