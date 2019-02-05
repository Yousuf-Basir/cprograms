#include<stdio.h>
#include<stdlib.h>

#define null 0

typedef struct node
{
    int data;
    struct node* left;
    struct node* right;
}Node;

Node *createNode(int d)
{
    Node *newNode;
    newNode = (Node*)malloc(sizeof(Node));
    if(newNode == null)
    {
        printf("Error! Could not open new node.");
        exit(1);
    }
    newNode->data = d;
    newNode->right = null;
    newNode->left = null;
    return newNode;
}

void addLeftChild(Node *node, Node *child)
{
    node->left = child;
}

void addRightChild(Node *node, Node *child)
{
    node->right = child;
}

Node* createTree()
{
    Node *two = createNode(2);
    Node *three = createNode(3);
    Node *four = createNode(4);
    Node *five = createNode(5);
    Node *six = createNode(6);
    Node *seven = createNode(7);
    Node *eight = createNode(8);
    addLeftChild(two, three);
    addRightChild(two, four);
    addLeftChild(three, five);
    addRightChild(three, six);
    addLeftChild(four, seven);
    addRightChild(four, eight);
    return two;
}

void preOrder(Node *node)
{
    printf("%d  ",node->data);
    if(node->left!=null)
    {
        preOrder(node->left);
    }
    if(node->right!=null)
    {
        preOrder(node->right);
    }
}

void postOrder(Node *node)
{
    if(node->left!=null)
    {
        postOrder(node->left);
    }
    if(node->right!=null)
    {
        postOrder(node->right);
    }
    printf("%d  ",node->data);
}

void inOrder(Node *node)
{
    if(node->left!=null)
    {
        inOrder(node->left);
    }
    printf("%d  ",node->data);
    if(node->right!=null)
    {
        inOrder(node->right);
    }
}

int main ()
{
    Node *root;
    root = createTree();
    printf("The pre-order traverse:\n");
    preOrder(root);
    printf("\nThe post-order traverse:\n");
    postOrder(root);
    printf("\nThe in-order traverse:\n");
    inOrder(root);
    return 0;
}
