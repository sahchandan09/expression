#include <stdio.h>

int main(void) {
  int x,y;
  printf("enter the value of x in expression\n");
  printf("y = 2*x^3+3*x^2-5*x+4 :")
  ;
  printf("\nx =");
  scanf("%d",&x);
  y = 2*x^3+3*x^2-5*x+4;
  printf("the value of expression y = %d",y);
  return 0;
}