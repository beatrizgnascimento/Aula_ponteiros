#include <stdio.h>

typedef struct aluno{
  char nome[50];
  int matricula;
  int dia, mes, ano;
  float iea;
}aluno;

int main()
{
  printf("int: %d\n", sizeof(int)); //colocar dentro do sizeof o tipo que voce quer saber o tamanho
  printf("long int %d\n", sizeof(long int));
  printf("long long int: %d\n", sizeof(long long int));
  
  printf("Struct aluno: %d\n", sizeof(aluno));
  return 0;
}