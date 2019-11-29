#include <stdio.h>

void soma(int piValorA, int piValor B, int *piResultado){
  printf("Endereco de piResultado = %d\n", piResultado); 
  /* o valor está sendo colocado diretamente na memória */
  *piResultado = piValorA + piValorB;
}

int main(void) {
int iValorA, iValorB, iResultado;

printf("Entre com os valores: ")

scanf("%d %d", &iValorA, &iValorB);

printf("Endereco de iResultado = %d\n", &iResultado);


return 0;
}
