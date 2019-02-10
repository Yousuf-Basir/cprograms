#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node * left;
    struct node * right;
};

struct node* newNode(int  data){
    struct node* node = (struct node*)malloc(sizeof(struct node));
    node->data = data;
    node->left = NULL;
    node->right = NULL;
    return(node);
}

int main(){
    struct node* root = newNode(1); /*
            1
           / \
          /   \
        NULL  NULL                  */
    root->left = newNode(2);
    root ->right = newNode(3);  /*
            1
           / \
          /   \
        2       3
       / \     / \
      /   \   /   \
   NULL NULL NULL NULL

*/
    root->left->left = newNode(4); /*
            1
           / \
          /   \
        2       3
       / \     / \
      /   \   /   \
     4  NULL NULL NULL
    / \
   /   \
NULL  NULL

*/

    return 0;
}
