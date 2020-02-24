#include <stdio.h>
#include <stdlib.h>
#define TAMANHO_PILHA 20

//estrutura q contem a pilha de informacoes
struct pilha
{
    int topo;
    int itens[TAMANHO_PILHA];
};

int empty(struct pilha *p)
{
    if (p->topo == -1)
    {
        return 1;
    }
    return 0;
}

int pop(struct pilha *p)
{
    if (empty(p))
    {
        printf("\nPilha vazia\n");
        exit(1);
    }
    //retorna o item da pilha atual e diminui a posicao da pilha    
    return (p->itens[p->topo--]);
}

void push(struct pilha *p, int e)
{
    if (p->topo == (TAMANHO_PILHA - 1))
    {
        printf("\nEstouro de pilha\n");
        exit(1);
    }
    //apos verificar se nao haveria estouro na capacidade da pilha, eh criada uma nova posicao na pilha e o elemento eh armazenado
    p->itens[++(p->topo)] = e;
    return;    
}

int size(struct pilha *p)
{
    return p->topo+1;
}

int stackpop(struct pilha *p)
{
    return p->itens[p->topo];
}

int main()
{   
    struct pilha x;
    x.topo = -1;

    push(&x, 1);
    push(&x, 2);
    push(&x, 3);

    printf("\nTamanho da pilha: %d", size(&x));
    printf("\nElemento do topo: %d\n", stackpop(&x));

    printf("\n%d", pop(&x));
    printf("\n%d", pop(&x));
    printf("\n%d", pop(&x));
    printf("\n%d", pop(&x));

    return 0;
}
