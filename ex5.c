#include <stdio.h>
#include <stdlib.h>


//jeito feio e bagunçado 
int main()
{
  int **p = NULL;
  int i, j;

  p = (int**)malloc(3 * sizeof(int *));

  for(i = 0; i < 3; i++)
  {
    p[i] = (int*)malloc(4*sizeof(int));
  }

  for(i = 0; i < 3; i++)
  {
    for(j = 0; j < 4; j++)
    {
      printf("%p\n", &p[i][j]); //imprimindo o endereço de memoria de cada casa da matriz

    }
    printf("\n");
  }
  return 0;
}