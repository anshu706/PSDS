#include <stdio.h>
#include <stdlib.H>

struct Node
{
    int data;
    struct Node *next;
    struct Node *prev;
};

void traverseforward(struct Node *head)
{
    struct Node *temp;
    do
    {
        printf("Node Data is %d\n", temp->data);
        temp = temp->next;
    } while (temp != head);
}

int main()
{
    struct Node *head = (struct Node *)malloc(sizeof(struct Node));
    head->data = 5;

    struct Node *head1 = (struct Node *)malloc(sizeof(struct Node));
    head1->data = 10;
    head1->prev = head;
    head->next = head1;

    struct Node *head2 = (struct Node *)malloc(sizeof(struct Node));
    head2->data = 15;
    head1->next = head2;
    head2->prev = head1;
    head2->next = head;
    head->prev = head2;

    struct Node *temp = head;
    do
    {
        printf("Node data is %d\n", temp->data);
        temp = temp->next;
    } while (temp != head);

    return 0;
}