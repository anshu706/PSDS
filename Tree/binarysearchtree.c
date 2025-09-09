#include <stdio.h>
#include <stdlib.h>

struct binaryNode
{
    int data;
    struct binaryNode *left;
    struct binaryNode *right;
};

struct binaryNode *newnode(int value)
{
    struct binaryNode *temp = (struct binaryNode *)malloc(sizeof(struct binaryNode));
    temp->data = value;
    temp->left = NULL;
    temp->right = NULL;
    return temp;
};

struct binaryNode *insertdata(struct binaryNode *root, int value)
{
    if (root == NULL)
    {
        return newnode(value);
    }
    else if (root->data > value)
    {
        root->left = insertdata(root->left, value);
    }
    else
    {
        root->right = insertdata(root->right, value);
    }
    return root;
};

int main()
{
    struct binaryNode *root = NULL;
    root = insertdata(root, 30);
    insertdata(root, 45);
    insertdata(root, 23);
}
