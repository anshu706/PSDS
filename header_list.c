#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

int main()
{
    struct Node *head = (struct Node *)malloc(sizeof(struct Node));
    head->data = 5;

    struct Node *head1 = (struct Node *)malloc(sizeof(struct Node));
    head1->data = 10;
    head->next = head1;

    struct Node *head2 = (struct Node *)malloc(sizeof(struct Node));
    head2->data = 15;
    head1->next = head2;
    head2->next = NULL;

    struct Node *header = (struct Node *)malloc(sizeof(struct Node));
    header->next = head;
    header->data = 30;

    struct Node *head3 = (struct Node *)malloc(sizeof(struct Node));
    head3->data = 20;
    head2->next = head3;
    head3->next = NULL;
    header->data += head3->data;

    return 0;
}
