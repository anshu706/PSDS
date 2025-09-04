#include <stdio.h>
#include <stdlib.h>
#define MAX 100

struct stack
{
    int top;
    int arr[MAX];
};

int isempty(struct stack *st)
{
    if (st->top == -1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int isfull(struct stack *st)
{
    if (st->top == MAX - 1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

void push(struct stack *st, int value)
{
    if (st->top == MAX - 1)
    {
        printf("stack overflow\n");
    }
    else
    {
        st->top++;
        st->arr[st->top] = value;
    }
}

int pop(struct stack *st)
{
    if (st->top == -1)
    {
        printf("stack underflow\n");
        return -1;
    }
    else
    {
        int x = st->arr[st->top];
        st->top--;
        return x;
    }
}

void traverse(struct stack *st)
{
    for (int i = 0; i <= st->top; i++)
    {
        printf("Element is %d\n", st->arr[i]);
    }
}

void searching(struct stack *st, int key)
{
    int flag = 0;
    for (int i = 0; i <= st->top; i++)
    {
        if (st->arr[i] == key)
        {
            flag = 1;
        }
    }
    if (flag == 1)
    {
        printf("%d is present\n", key);
    }
    else
    {
        printf("%d is not present\n", key);
    }
}

int main()
{
    struct stack st;
    st.top = -1;
    push(&st, 5);
    pop(&st);
    traverse(&st);
    // searching(5, &st);
    return 0;
}
