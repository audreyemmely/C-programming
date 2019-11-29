#include <stdio.h>

void soma(int piValorA, int piValorB, int *piResultado){
  printf("Endereco de piResultado = %p\n", piResultado); 
  /* o valor está sendo colocado diretamente na memória */
  *piResultado = piValorA + piValorB;
}

int main(void) {
int iValorA, iValorB, iResultado;

printf("Entre com os valores: ");

scanf("%d %d", &iValorA, &iValorB);

printf("Endereco de iResultado = %p\n", &iResultado);

soma(iValorA, iValorB, &iResultado); 
/* está sendo passado o endereço de memória da variável, qualquer alteração estará sendo realizada na memória */

printf("Soma: %d\n", iResultado);

return 0;
}
