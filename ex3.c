#include <stdio.h>
#include <stdlib.h> //malloc
int main()
{
  float *p = NULL;
  int i;

  //alocando 100 posicoes de float
  p = (float *)malloc(100 *sizeof(float));

  if(p == NULL) //alocacao falhou
  {
    printf("Memoria nao alocada");
    exit(1);//mata o programa quando algo não da certo
  }
  
  for(i = 0; i < 5; i++)
  {
    printf("Digite o valor de p[%d]:\n", i);
    scanf("%f", &p[i]);
  }

  printf("Valores digitados: \n");

  for(i = 0; i < 5; i++)
  {
    printf("[%d]: %f\n", i, p[i]);
  }

//manipular p como um vetor 
  free(p);

  return 0;
}