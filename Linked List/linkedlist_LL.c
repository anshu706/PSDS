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
    head->data = 10;

    struct Node *head1 = (struct Node *)malloc(sizeof(struct Node));
    head1->data = 20;
    head->next = head1;

    struct Node *head2 = (struct Node *)malloc(sizeof(struct Node));
    head2->data = 30;
    head1->next = head2;
    head2->next = NULL;

    struct Node *temp = head;
    int key = 20;
    int flag = 0;
    while (temp != NULL)
    {
        if (temp->data = key)
        {
            flag = 1;
        }
    }
    if (flag == 1)
    {
        printf("key is present\n");
    }
    else
    {
        printf("key is not present\n");
    }

    // while (temp != NULL)
    // {
    //     printf("node data is %d\n", temp->data);
    //     temp = temp->next;
    // }

    return 0;
}