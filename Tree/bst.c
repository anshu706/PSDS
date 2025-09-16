#include <stdio.h>
#include <stdlib.h>

struct binarytreenode
{
    int key;
    struct binarytreenode *left;
    struct binarytreenode *right;
};

struct binarytreenode *create(int value)
{
    struct binarytreenode *temp = (struct binarytreenode *)malloc(sizeof(struct binarytreenode));
    temp->key = value;
    temp->left = NULL;
    temp->right = NULL;
    return temp;
}
struct binarytreenode *insert(struct binarytreenode *root, int value)
{
    if (root == NULL)
    {
        printf("valid %d is inserted\n", value);
        return create(value);
    }
    else if (root->key > value)
    {
        root->left = insert(root->left, value);
    }
    else
    {
        root->right = insert(root->right, value);
    }
    return root;
}

void preorder(struct binarytreenode *root)
{
    if (root == NULL)
    {
        return;
    }
    else
    {
        printf("%d ", root->key);
        preorder(root->left);
        preorder(root->right);
    }
}

void inorder(struct binarytreenode *root)
{
    if (root == NULL)
    {
        return;
    }
    else
    {
        inorder(root->left);
        printf("%d ", root->key);
        inorder(root->right);
    }
}

void postorder(struct binarytreenode *root)
{
    if (root == NULL)
    {
        return;
    }
    else
    {
        postorder(root->left);
        postorder(root->right);
        printf("%d ", root->key);
    }
}
int main()
{
    struct binarytreenode *root = NULL;
    root = insert(root, 40);
    insert(root, 60);
    insert(root, 70);
    insert(root, 34);
    insert(root, 35);
    printf("Preorder:");
    preorder(root);
    printf("\n");
    printf("inorder:");
    inorder(root);
    printf("\n");
    printf("postorder:");
    postorder(root);
}