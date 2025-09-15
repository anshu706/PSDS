#include <stdio.h>
#include <stdlib.h>

struct binarytreeNode
{
    int key;
    struct binarytreeNode *left;
    struct binarytreeNode *right;
};

struct binarytreeNode *create(int value)
{
    struct binarytreeNode *temp = (struct binarytreeNode *)malloc(sizeof(struct binarytreeNode));
    temp->key = value;
    temp->left = NULL;
    temp->right = NULL;
    return temp;
}

struct binarytreeNode *insert(struct binarytreeNode *root, int value)
{
    if (root == NULL)
    {
        printf("value %d is inserted\n", value);
        return create(value);
    }
    else if (value < root->key)
    {
        root->left = insert(root->left, value);
    }
    else
    {
        root->right = insert(root->right, value);
    }
    return root;
}

void preorder(struct binarytreeNode *root)
{
    if (root == NULL)
    {
        return;
    }
    printf("%d ", root->key);
    preorder(root->left);
    preorder(root->right);
}

void inorder(struct binarytreeNode *root)
{
    if (root == NULL)
    {
        return;
    }
    inorder(root->left);
    printf("%d ", root->key);
    inorder(root->right);
}

void postorder(struct binarytreeNode *root)
{
    if (root == NULL)
    {
        return;
    }
    postorder(root->left);
    postorder(root->right);
    printf("%d ", root->key);
}

int main()
{
    struct binarytreeNode *root = NULL;
    root = insert(root, 40);
    insert(root, 60);
    insert(root, 70);
    insert(root, 80);

    printf("\nPreorder Traversal: ");
    preorder(root);

    printf("\nInorder Traversal: ");
    inorder(root);

    printf("\nPostorder Traversal: ");
    postorder(root);

    return 0;
}
