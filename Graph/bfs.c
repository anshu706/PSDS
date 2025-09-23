#include <stdio.h>
#include <stdlib.h>

#define MAX 100

int queue[MAX];
int adj[MAX][MAX];
int front = -1, rear = -1;

void enqueue(int value)
{
    if (rear == MAX - 1)
    {
        return;
        // printf("Queue Overflow\n");
    }
    else
    {
        rear += 1;
        queue[rear] = value;
    }
}

int dequeue()
{
    if (front == rear)
    {
        // printf("Queue Underflow\n");
        return -1;
    }
    else
    {
        front += 1;
        int x = queue[front];
        return x;
    }
    return 0;
}

void bfs(int vertex, int source)
{
    int visited[vertex];
    for (int i = 0; i < vertex; i++)
    {
        visited[i] = 0;
    }
    enqueue(source);
    visited[source] = 1;
    printf("BFS traversal is: ");
    while (front < rear)
    {
        int x = dequeue();
        visited[x] = 1;
        printf("%d ", x);
        for (int i = 0; i < vertex; i++)
        {
            if (adj[x][i] == 1 && visited[i] == 0)
            {
                enqueue(i);
                visited[i] = 1;
            }
        }
    }
}

int main()
{
    int vertex, edges;
    printf(" no. of vertex: ");
    scanf("%d", &vertex);
    printf(" no. of edges: ");
    scanf("%d", &edges);

    for (int i = 0; i < vertex; i++)
    {
        for (int j = 0; j < vertex; j++)
        {
            adj[i][j] = 0;
        }
    }

    printf("Edges: ");
    for (int i = 0; i < edges; i++)
    {
        int x, y;
        scanf("%d", &x);
        scanf("%d", &y);
        adj[x][y] = 1;
        adj[y][x] = 1;
    }
    bfs(vertex, 0);
}