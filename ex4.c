#include <stdio.h>
int main()
{
  int a = 2, b = 2;
  int *p = &a, *q = &b; //p aponta para a e q aponta para b
  if(p == q) //Compara a posicao de endereço de memória
  {
    printf("Mesma posicao\n");
  } else
  {
    printf("Posicoes diferentes\n");
  }

  if(*p == *q) //Compara o conteudo, ou seja, valor da variavel que esta sendo apontada
  {
    printf("Mesmo conteudo\n");
  }
  else
  {
    printf("Conteudo diferente\n");
  }
  return 0;
}