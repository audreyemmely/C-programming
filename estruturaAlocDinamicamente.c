#include <stdio.h>
#include <stdlib.h>

struct ST_DADOS
{
  char nome[40];
  float salario;

  //estrutura dentro de uma estrutura
  struct nascimento 
  {
    int ano, mes, dia;
  }dt_nascimento;
};


int main(void) {
  //ponteiro para a estrutura
  struct ST_DADOS *p;

  // alocação de memória para o ponteiro da estrutura  
  p = (struct ST_DADOS*)malloc(sizeof(struct ST_DADOS));

  //string (vetor de caracteres) eh um ponteiro, por isso a ausência do &
  printf("Entre com o nome: ");
  scanf("%s", p->nome);

  printf("Entre com o salario: R$ ");
  scanf("%f", &p->salario);

  /*o '->' eh chamado de pointer member. Ele eh usado para referenciar um campo da estrutura no lugar do ponto '.'*/
  printf("Entre com o nascimento: ");
  scanf("%d %d %d", &p->dt_nascimento.dia, &p->dt_nascimento.mes, &p->dt_nascimento.ano);

  printf("\n====== Dados digitados =====");
  printf("\nNome = %s", p->nome);
  printf("\nSalario = R$ %.2f", p->salario);
  printf("\nNascimento = %d/%d/%d\n", p->dt_nascimento.dia, p->dt_nascimento.mes, p->dt_nascimento.ano);

  free(p);

  return 0;
}
