#include <stdio.h>
#include <stdlib.h>

int main()
{
  int i;
  
  int *p = (int*)malloc( 5 * sizeof(int));

  int *q = (int*)calloc( 5, sizeof(int));

  if(!p || !q)
  {
    exit(1);
  }

  for(i = 0; i < 5; i++)
  {
    printf("%d: %d %d\n", i, p[i], q[i]);
  }
  return 0;
}