#include<stdio.h>
  #define PI 3.14
  int main()
  {
      float r,a;
      printf("Enter radius:");
      scanf("%f",&r);
      a=PI*r*r;
      printf("\nArea of circle: %.2f",a);
      return 0;
  }
