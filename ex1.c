#include <stdio.h>
int main()
{
  int a = 2;
  int *x = NULL;

  x = &a; //ponteiro x aponta para a
  //%p imprime endereco de memoria
  printf("Endereco de A: %p\n", &a); //0061FF1C
  printf("X aponta para: %p\n", x); //0061FF1C
  printf("Endereco de X: %p\n", &x); //0061FF18
  printf("Conteudo de X: %d\n", *x); //2

  return 0;
}
