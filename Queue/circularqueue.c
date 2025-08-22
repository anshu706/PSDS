#include <stdio.h>
#include <stdlib.h>

#define MAX 5

int front = -1, rear = -1;
int queue[MAX];

int isempty()
{
    if (front == -1)
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
    if ((rear + 1) % MAX == front)
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
    if (isfull() == 1)
    {
        printf("Queue Overflow\n");
    }
    else
    {
        rear = (rear + 1) % MAX;
        queue[rear] = value;
        printf("%d is enqueued\n", value);
    }
}

void dequeue()
{
    if (isempty() == 1)
    {
        printf("Queue Underflow\n");
    }
    else if (front == rear)
    {
        front = -1;
        rear = -1;
    }
    else
    {
        front = (front + 1 % MAX);
        int x = queue[front];
        printf("%d is dequeue\n", x);
    }
}

int main()
{
    enqueue(5);
    // enqueue(6);
    // enqueue(7);
    // enqueue(8);
    // enqueue(9);
    // printf("%d\n", queue[0]);
    // enqueue(10);
    // printf("%d\n", queue[0]);
    return 0;
}
