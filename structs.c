#include <stdio.h>
#include <stdlib.h>
typedef struct pessoa
{
  char nome[50];
  int idade;

}pessoa;
int main()
{
  pessoa *p = NULL;

  //alocacao de 1 pessoa

  p = (pessoa*)malloc(sizeof(pessoa));

  if(p == NULL)
  {
    printf("Falha na alocacao\n");
    exit(1);
  }

  printf("Digite o nome e a idade: \n");
  scanf("%[^\n]", p -> nome);
  scanf("%d", &p -> idade );

  printf("Nome: %s\nIdade: %d\n", p ->nome, p ->idade);
  return 0;
}