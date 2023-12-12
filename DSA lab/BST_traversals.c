/*#include <iostream>
using namespace std;

struct node
{
    int key;
    struct node *left, *right;
};
struct node *root = NULL;
struct node *createNode(int info)
{
    struct node *newnode;
    newnode = new struct node;
    newnode->key = info;
    newnode->left = newnode->right = NULL;
    return newnode;
}

struct node *insertElement(struct node *node, int key)
{
    if (node == NULL)
    {
        return createNode(key);
    }
    if (node->key > key)
    {
        return insertElement(node->left, key);
    }
    else if (node->key < key)
    {
        return insertElement(node->right, key);
    }
    return node;
}
void preorderTraversal(struct node *root)
{
    if (root != NULL)
    {
        cout << root->key << "\t";
        preorderTraversal(root->left);
        preorderTraversal(root->right);
    }
}
void inorderTraversal(struct node *root)
{
    if (root != NULL)
    {
        inorderTraversal(root->left);
        cout << root->key << "\t";
        inorderTraversal(root->right);
    }
}
void postorderTraversal(struct node *root)
{
    if (root != NULL)
    {
        postorderTraversal(root->left);
        postorderTraversal(root->right);
        cout << root->key << "\t";
    }
}

int main()
{
    struct node *root = NULL;
    int choice;
    char ch;
    root = insertElement(root, 50);
    insertElement(root, 30);
    insertElement(root, 20);
    insertElement(root, 40);
    insertElement(root, 70);
    insertElement(root, 60);
    cout << "------Binary Search Tree Traversals:Preorder,Inorder and Postorder --------" << endl;
    do
    {
        cout << "\n1.Preorder Traversal\n2.Inorder Traversal\n3.Postorder Traversal" << endl;
        cout << "Enter your choice: " << endl;
        cin >> choice;
        switch (choice)
        {
        case 1:
            preorderTraversal(root);
            break;
        case 2:
            inorderTraversal(root);
            break;
        case 3:
            postorderTraversal(root);
            break;
        default:
            cout << "Invalid choice!" << endl;
        }
        cout << "\nDo you want to continue?(Y/N)" << endl;
        cin >> ch;
    } while (ch == 'y' || ch == 'Y');
    return 0;
}
*/
#include <stdio.h>
#include <stdlib.h>

struct node
{
    int item;
    struct node *left;
    struct node *right;
};

// Inorder traversal
void inorderTraversal(struct node *root)
{
    if (root == NULL)
        return;
    inorderTraversal(root->left);
    printf("%d ->", root->item);
    inorderTraversal(root->right);
}

// preorderTraversal traversal
void preorderTraversal(struct node *root)
{
    if (root == NULL)
        return;
    printf("%d ->", root->item);
    preorderTraversal(root->left);
    preorderTraversal(root->right);
}

// postorderTraversal traversal
void postorderTraversal(struct node *root)
{
    if (root == NULL)
        return;
    postorderTraversal(root->left);
    postorderTraversal(root->right);
    printf("%d ->", root->item);
}

// Create a new Node
struct node *createNode(int value)
{
    struct node *newNode = malloc(sizeof(struct node));
    newNode->item = value;
    newNode->left = NULL;
    newNode->right = NULL;

    return newNode;
}

// Insert on the left of the node
struct node *insertLeft(struct node *root, int value)
{
    root->left = createNode(value);
    return root->left;
}

// Insert on the right of the node
struct node *insertRight(struct node *root, int value)
{
    root->right = createNode(value);
    return root->right;
}

int main()
{
    struct node *root = createNode(1);
    insertLeft(root, 12);
    insertRight(root, 9);

    insertLeft(root->left, 5);
    insertRight(root->left, 6);

    printf("Inorder traversal \n");
    inorderTraversal(root);

    printf("\nPreorder traversal \n");
    preorderTraversal(root);

    printf("\nPostorder traversal \n");
    postorderTraversal(root);
}