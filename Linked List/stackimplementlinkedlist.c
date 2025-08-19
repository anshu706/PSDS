// stack implementation using linked list
#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

struct Node *top = NULL;
int isempty()
{
    if (top == NULL)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

void push(int value)
{
    struct Node *newnode = (struct Node *)malloc(sizeof(struct Node));
    newnode->data = value;
    newnode->next = top;
    top = newnode;
    printf("%d pushed\n", value);
}

void pop()
{
    if (top == NULL)
    {
        printf("Underflow\n");
    }
    else
    {
        int x = top->data;
        top = top->next;
        printf("%d popped\n", x);
    }
}

void peek()
{
    if (top == NULL)
    {
        printf("Stack is empty\n");
    }
    else
    {
        printf("Peek element is %d\n", top->data);
    }
}

void traverse()
{
    struct Node *temp = top;
    while (temp != NULL)
    {
        printf("Element is %d\n", temp->data);
        temp = temp->next;
    }
}
int main()
{
    isempty();
    push(5);
    push(6);
    peek(4);
}
