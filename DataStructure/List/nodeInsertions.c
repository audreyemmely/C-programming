#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

typedef struct node
{
    int data;
    struct node *next;
} Node;

//insere no começo da lista
void push(Node **head_ref, int new_data)
{
    Node *new_node = (Node *)malloc(sizeof(Node));
    new_node->data = new_data;
    new_node->next = *head_ref;
    *head_ref = new_node;
}

//insere depois de um nó dado
void insertAfter(Node *prev_node, int new_data)
{
    if (prev_node == NULL)
    {
        printf("O nó anterior não pode ser nulo!");
        return;
    }

    Node *new_node = (Node *)malloc(sizeof(Node));
    new_node->data = new_data;
    new_node->next = prev_node->next;
    prev_node->next = new_node;
}

//insere no final da lista
void append(Node **head_ref, int new_data)
{
    Node *new_node = (Node *)malloc(sizeof(Node));
    Node *last = *head_ref;
    new_node->data = new_data;
    new_node->next = NULL;
    if (*head_ref == NULL)
    {
        *head_ref = new_node;
        return;
    }
    while (last->next != NULL)
        last = last->next;

    last->next = new_node;
    return;
}

void printList(Node *no)
{
    while (no != NULL)
    {
        printf(" %d ", no->data);
        no = no->next;
    }
}

int main()
{
    setlocale(LC_ALL, "Portuguese_Brasil");
    
    Node* head = NULL;
    append(&head, 6);
    push(&head, 7);
    push(&head, 1);
    append(&head, 4);
    insertAfter(head->next, 8);

    printList(head);

    return 0;
}
