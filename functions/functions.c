/**
 * function declaration
 * (1) data_type returned (2) name_of_function( (3) parameter) {
 *  // code here
 * } 
 * 
*/

// sum of two numbers 

#include<stdio.h>
#include<stdlib.h>

// sum function
int sum(int a, int b){
  return a + b;
  
}

int main(){
  int ans = sum(4,6);
  printf("%d\n", ans);
}
