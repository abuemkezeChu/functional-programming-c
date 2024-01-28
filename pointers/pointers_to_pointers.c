#include <stdio.h>
int main()
{
  int x = 5;
  int *p = &x;
  int **q = &p;
  int ***r = &q;

  // printf("Value stored at address stored in r: %d\n", ***r = 21);
  printf("Address of x->%p\n", &x);
  printf("Address of p->%p\n", &p);
  printf("Content of p->%p\n", p);
  printf("Address of q->%p\n", &q);
  printf("Content of q->%p\n", q);
  printf("Address of r->%p\n", &r);
  printf("Content of r->%p\n", r);
  // printf("Updated value of x is %d\n", x);

  return 0;
}