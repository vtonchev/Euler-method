#include "stdio.h"

float func(float x, float y)
{
  float dfdx;
  dfdx = y;
  return dfdx;
}

int main()
{
  float vectorResult[2][10000] = {};
  int vectorResultsLength = 0;
  float a, b, x, y, h, t, k;
  printf("\nEnter x0,y0,h,xn: ");
  scanf("%f%f%f%f", &a, &b, &h, &t);
  x = a;
  y = b;
  printf("\n  x\t  y\n");
  for (int index = 0; x <= t; index++)
  {
    k = h * func(x, y);
    y = y + k;
    x = x + h;

    vectorResult[0][index] = x;
    vectorResult[1][index] = y;
    vectorResultsLength++;
  }

  for (long i = 0; i < vectorResultsLength; i++)
  {
    printf("%0.3f\t%0.3f\n", vectorResult[0][i], vectorResult[1][i]);
  }

  return 0;
}