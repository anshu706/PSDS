#include <stdio.h>
#include <stdlib.h>
#define MAX 100

int front = -1, rear = -1;
int queue[MAX];

int isempty()
{
    if (front == rear)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int isfull()
{
    if (rear == MAX - 1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

void enqueue(int value)
{
    if (rear == MAX - 1)
    {
        printf("queue overflow\n");
    }
    else
    {
        rear += 1;
        queue[rear] = value;
        printf("%d is enqueue\n", value);
    }
}

int dequeue()
{
    if (front == rear)
    {
        printf("queue underflow\n");
        return -1;
    }
    else
    {
        front += 1;
        int x = queue[front];
        printf("%d is dequeue\n", x);
        return x;
    }
}

void traverse()
{
    if (rear == front)
    {
        printf("Queue is Empty\n");
    }
    else
    {
        printf("Queue elements\n");
        for (int i = front + 1; i <= rear; i++)
        {
            printf("%d", queue[i]);
        }
        printf("\n");
    }
}

void searching(int key)
{
    if (front == rear)
    {
        printf("Queue is Empty\n");
    }
    else
    {
        for (int i = front + 1; i <= rear; i++)
        {
            if (queue[i] = key)
            {
                printf("%d found at index %d\n", key, i);
                return;
            }
        }
        printf("%d not found\n");
    }
}

int main()
{
    enqueue(5);
    enqueue(6);
    dequeue();
    traverse();
    int key = 6;
    searching(5);
    return 0;
}
