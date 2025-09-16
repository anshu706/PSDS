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

struct binarytreenode *searching(struct binarytreenode *root, int target)
{
    if (root == NULL)
    {
        printf("\ntarget not found");
        return root;
    }
    else if (root->key == target)
    {
        printf("\ntarget found");
        return root;
    }
    else if (root->key < target)
    {
        searching(root->right, target);
    }
    else if (root->key > target)
    {
        searching(root->left, target);
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

struct binarytreenode *findmin(struct binarytreenode *root)
{
    if (root == NULL)
    {
        return NULL;
    }
    else if (root->left != NULL)
    {
        return findmin(root->left);
    }
    return root;
}

struct binarytreenode *delete(struct binarytreenode *root, int value)
{
    if (root == NULL)
    {
        return NULL;
    }
    else if (value > root->key)
    {
        root->right = delete(root->right, value);
    }
    else if (value < root->key)
    {
        root->left = delete(root->left, value);
    }
    else
    {
        if (root->left == NULL && root->right == NULL)
        {
            free(root);
            return NULL;
        }
        else if (root->left == NULL || root->right == NULL)
        {
            struct binarytreenode *temp;
            if (root->left = NULL)
            {
                temp = root->right;
            }
            else
            {
                temp = root->left;
            }
            free(root);
            return temp;
        }
        else
        {
            struct binarytreenode *temp = findmin(root->right);
            root->key = temp->key;
            root->right = delete(root->right, temp->key);
        }
    }
    return root;
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

    int target = 70;
    searching(root, target);

    if (findmin(root) != NULL)
    {
        printf("\nMinimum Node is %d\n", findmin(root)->key);
    }
    int value = 35;
    delete(root, value);
    preorder(root);
    printf("\n");
}