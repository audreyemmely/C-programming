#include <stdio.h>

int pilha[20];
int pos = 0;

void push(int valor)
{
    pilha[pos] = valor;
    //empilha um novo elemento. nao eh verificada a capacidade maxima da pilha.
    pos++;
    return;
}

int pop()
{
    //retorna o elemento do topo da pilha. nao eh verificado o final da pilha.
    return(pilha[--pos]);
}

int size() //retorna o tamanho da pilha.
{
    return pos; 
}

int stackpop() //retorna o topo da pilha sem desempilhar.
{
    return pilha[pos];
}

int main()
{
    printf("\nColocando dados na pilha...");
    push(1);
    push(2);
    push(3);

    printf("\nTamanho da pilha: %d", size());

    printf("\nPegando dado da pilha: %d", pop());
    printf("\nPegando dado da pilha: %d", pop());
    printf("\nPegando dado da pilha: %d", pop());

    printf("\nTamanho da pilha %d\n", size());
    return 0;
}
