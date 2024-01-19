#include "stdio.h"
#include "libs/pbPlots/pbPlots.h"
#include "libs/pbPlots/supportLib.h"

// DEFINITIONS
int plotGraph(float xs[], float ys[]);
float func(float x, float y);

// FUNCTIONS
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
  printf("\nEnter x0 y0 h xn: ");
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

  plotGraph(vectorResult[0], vectorResult[1]);

  return 0;
}

int plotGraph(float xs[], float ys[])
{
  RGBABitmapImageReference *canvasReference = CreateRGBABitmapImageReference();
  DrawScatterPlot(canvasReference, 600, 400, ys, 5, xs, 5);

  size_t length;
  double *pngdata = ConvertToPNG(&length, canvasReference->image);
  WriteToFile(pngdata, length, "graph.png");
  DeleteImage(canvasReference->image);
}