#include <stdio.h>
#include <stdlib.h>
int main()
{
  int *p = NULL, i;

  p = (int*)malloc(5 * sizeof(int)); //alocando um array com 5 posiçõs de int
  //(int*) = typecast para o ponteiro de int

  if(!p) //verificando se o s.o irá fornecer memória, caso contrário, se encerra
  {
    printf("Memoria insuficiente\n");
    exit(1);
  }

  for(i = 0; i < 5; i++)
  {
    printf("Digite o valor da posicao %d: ", i);
    scanf("%d", &p[i]); //p passa a ser tratado como um array p[i]
  }
  return 0;
}