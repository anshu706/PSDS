#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *prev;
    struct Node *next;
};

void traverseforward(struct Node *head)
{
    struct Node *temp = head;
    while (temp != NULL)
    {
        printf("node data is %d\n", temp->data);
        temp = temp->prev;
    }
}

void traversebackward(struct Node *head)
{
    struct Node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    while (temp != NULL)
    {
        printf("node data is %d\n", temp->data);
        temp = temp->prev;
    }
}

void searching(struct Node *head, int key)
{
    int flag = 0;
    struct Node *temp = head;
    while (temp != NULL)
    {
        if (temp->data == key)
        {
            flag = 1;
        }
        temp = temp->next;
    }
    if (flag == 1)
    {
        printf("key is present");
    }
    else
    {
        printf("key is not present");
    }
}

int main()
{
    struct Node *head = (struct Node *)malloc(sizeof(struct Node));
    head->data = 10;
    head->prev = NULL;

    struct Node *head1 = (struct Node *)malloc(sizeof(struct Node));
    head1->data = 20;
    head->next = head1;
    head1->prev = head;

    struct Node *head2 = (struct Node *)malloc(sizeof(struct Node));
    head2->data = 30;
    head1->next = head2;
    head2->prev = head1;
    head2->next = NULL;

    struct Node *temp = head;
    do
    {
        printf("Node Data is %d\n", temp->data);
        temp = temp->next;
    } while (temp != head);

    // traverseforward(head);
    // traversebackward(head2);
    int key = 20;
    searching(head, key);
    return 0;
}