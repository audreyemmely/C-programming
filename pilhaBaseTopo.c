#include <stdio.h>
#include <stdlib.h>

typedef struct no
{
    int num;
    struct no *prox;
} NODE;

void iniciar (NODE *pilha)
{
    pilha->prox = NULL;
}

void inserir(NODE *pilha, int num)
{
    NODE *novo = (NODE*)malloc(sizeof(NODE));
    novo->num = num;
    if (pilha->prox == NULL)
    {
        pilha->prox = novo;
        novo->prox = NULL;
    }
    else
    {
        novo->prox = pilha->prox;
        pilha->prox = novo;
    }    
}

void imprimir(NODE *pilha)
{
    if (pilha->prox == NULL)
    {
        printf("\nPilha vazia\n");
        return;
    }
    
    NODE *atual = pilha->prox;

    while (atual != NULL)
    {
        printf("----\n");
        printf(" %d\n", atual->num);
        atual = atual->prox;
    }
    printf("----\n"); 
}

void troca(NODE *pilha)
{
    if (pilha->prox == NULL)
    {
        printf("\nPilha vazia\n");
        return;
    }

    NODE *no_aux = (NODE*)malloc(sizeof(NODE));
    NODE *tmp = pilha->prox;

    while (tmp->prox != NULL)
        tmp = tmp->prox;
    
    //troca dos valores:
    no_aux->num = tmp->num; //elemento do no auxiliar que recebe o elemento do ultimo no
    tmp->num = (pilha->prox)->num; //o elemento do ultimo no recebe o elemento do primeiro no
    (pilha->prox)->num = no_aux->num; //o primeiro no recebe o elemento armazenado no no auxiliar (que era o ultimo elemento)

    free(no_aux); //libera a memoria do no auxiliar    
}

int main()
{   
    NODE *p = (NODE*)malloc(sizeof(NODE));
    iniciar(p);

    printf("PILHA INICIAL:\n");
    inserir(p,20);
    inserir(p,30);
    inserir(p,40);
    inserir(p,50);
    inserir(p,60);
    inserir(p,70);

    imprimir(p);
    printf("\n\nPILHA COM TROCA DO PRIMEIRO E ULTIMO ELEMENTO:\n");
    troca(p);
    imprimir(p);
  
    return 0;
}

