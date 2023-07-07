#include <stdio.h>
#include <stdlib.h>
#define L 4
#define C 5

int main()
{
  int i;

  int **p = (int**)malloc(L * sizeof(int *));
  p[0] = (int*)malloc(L * C * sizeof(int));


  for(i = 1; i < L; i++)
  {
    p[i] = p [i - 1] + C;

  }

  free(p[0]);
  free(p);

  return 0;
}