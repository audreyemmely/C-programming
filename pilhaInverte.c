#include <stdio.h>
#include <stdlib.h>
#define TAMANHO_PILHA 10

typedef struct pilha
{
    int topo;
    int itens[TAMANHO_PILHA];
} Pilha;

Pilha *cria()
{
    Pilha *p = malloc(sizeof(Pilha));
    if (p != NULL)
    {
        p->topo = 0;
    }
    return p;
}

void insere(Pilha *p, int valor)
{
    p->itens[p->topo] = valor;
    p->topo++;
}

void exibe(Pilha *p)
{
    for (int i = 0; i < p->topo; i++)
    {
        printf("%d\n", p->itens[i]);
    }
}

Pilha *inverte(Pilha *p)
{
    Pilha *outra = cria();
    while (p->topo > 0)
    {
        outra->itens[outra->topo] = p->itens[p->topo-1];
        p->topo--;
        outra->topo++;
    }
    return outra;    
}

int main()
{   
    Pilha *p = cria();
    insere(p, 23);
    insere(p, 50);
    insere(p, 90); 
    exibe(p);
    p = inverte(p);
    printf("\n");
    exibe(p);

    return 0;
}
