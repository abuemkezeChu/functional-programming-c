#include<stdio.h>
//#include<conio.h>
int main(){
  int count = 0;
  float sum = 0, avg = 0;
  float score = 0;
  printf("Enter score (-1 to stop): ");
  scanf("%f",&score);
  while (score>=0)
  {
    sum = sum + score;
    count++;
    printf("Enter score (-1 to stop): ");
    scanf("%f",&score);
  }
  avg = sum / count;
  printf("\nAverage = %.2f\n", avg);
  printf("\nSum = %.2f\n", sum);
return 0;
}