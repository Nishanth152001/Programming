#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef struct node

{
    int data;
    struct node *left;
    struct node *right;
} Node;

Node *root;

void insert(int val)
{
    Node *newnode = new Node();
    newnode->data = val;
    newnode->left = NULL;
    newnode->right = NULL;
    if (root == NULL)
    {
        root = newnode;
    }
    else
    {
        Node *prev;
        Node *tptr;
        for (tptr = root, prev = NULL; tptr != NULL; prev = tptr, val < tptr->data ? (tptr = tptr->left) : (tptr = tptr->right))
            ;
        if (prev->data > val)
        {
            prev->left = newnode;
        }
        else
        {
            prev->right = newnode;
        }
    }
}

void display(Node *root)
{
    if (root != NULL)
    {
        display(root->left);
        display(root->right);
        cout << root->data << " ";
        }
}

int main()
{
    int arr[] = {100, 90, 110, 60, 150, 20};
    int size = (sizeof(arr) / sizeof(arr[0]));

    for (int i = 0; i < size; i++)
    {
        insert(arr[i]);
    }
    display(root);
}