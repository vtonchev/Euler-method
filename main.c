#include "stdio.h"
#include "gnuplot_i.h"

// #include "stdlib.h"
int plotOnGnu(float *vectorResult[][2], int vectorResultsLength);

float func(float x, float y)
{
  float dfdx;
  dfdx = y;
  return dfdx;
}

int main()
{
  float vectorResult[][2] = {};
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

    vectorResult[index][0] = x;
    vectorResult[index][1] = y;
    vectorResultsLength++;
  }

  for (long i = 0; i < vectorResultsLength; i++)
  {
    printf("%0.3f\t%0.3f\n", vectorResult[i][0], vectorResult[i][1]);
  }

  plotOnGnu(vectorResult, vectorResultsLength);

  return 0;
}

int plotOnGnu(float *vectorResult[][2], int vectorResultsLength)
{
  gnuplot_ctrl *h1;
  h1 = gnuplot_init();
  gnuplot_setstyle(h1, "lines");
  gnuplot_plot_xy(h1, vectorResult[0], vectorResult[1], vectorResultsLength, "Euler");
  gnuplot_close(h1);
  return 0;
}