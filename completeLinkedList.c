
#include<stdio.h>
#include<stdlib.h>
#define null 0

typedef struct node
{
    int data;
    struct node* next;
}Node;

 void printList(Node *h)
 {
     while(h!=null)
     {
         printf("%d  ",h->data);
         h = h->next;
     }
     printf("\n");
 }

Node *insertBeg(int d, Node *h)
{
    Node *t;
    t = (Node*)malloc(sizeof(Node));
    t->data = d;
    t->next = h;
    printf("\nSuccessful.\n");
    return t;
}

void insertMid(int d, int k, Node *h)
{
    Node *t;
    t= (Node*)malloc(sizeof(Node));
    t->data = d;
    while(h->data != k)
    {
        h = h->next;
    }
    t->next = h->next;
    h->next = t;
    printf("\nSuccessful.\n");
}

void insertEnd(int d, Node *h)
{
    Node *t;
    t = (Node*)malloc(sizeof(Node));
    t->data = d;
    t->next = null;
    while(h->next != null)
    {
        h = h->next;
    }
    h->next = t;
    printf("\nSuccessful.\n");
}

Node *deleteBeg (Node *h)
{
    printf("\nSuccessful.\n");
    return h->next;

}

void deleteMid (Node *h,int x)
{
    while(h->next->data!=x)
    {
        h=h->next;
    }
    h->next=h->next->next;
    printf("\nSuccessful.\n");
}

void deleteEnd (Node *h)
{
    while (h->next->next!=null)
    {
         h=h->next;
    }
    h->next=null;
    printf("\nSuccessful.\n");

}

 int main()
 {
     int d,i=1,n;
     Node *head, *temp;
     printf("How many Nodes?\n");
     scanf("%d",&n);
     if(n<=0)
     {
         printf("\nPlease enter a positive integer.\n");
         exit(1);
     }
     else
     {
         head = (Node*)malloc(sizeof(Node));
         printf("\nEnter data for Node %d\n",i++);
         scanf("%d",&head->data);
         head->next = null;
         temp = head;
         while(i<=n)
         {
             temp->next = (Node*)malloc(sizeof(Node));
             temp = temp->next;
             printf("\nEnter data for Node %d\n",i++);
             scanf("%d",&temp->data);
         }
         temp->next = null;
     }
     temp = head;
     int option,k;
     while(1)
     {
        printf("\nEnter your option:\n1.print the list\n2.insert data at the beginning \n3.insert data at middle\n4.insert data at the end\n5.delete data from the beginning \n6.delete data from the middle\n7.delete data from the end\nEnter -1 to exit)\n");
        scanf("%d",&option);
        if(option==-1)
            break;
        else
        {
            switch(option)
            {
                 case 1:
                     printf("\nSo, the data are:\n");
                     printList(head);
                     break;
                 case 2:
                    printf("\nEnter the data you want to insert at the beginning:\n");
                    scanf("%d",&d);
                    head = insertBeg(d,head);
                    break;
                 case 3:
                    printf("\nEnter the data you want to insert.\n");
                    scanf("%d",&d);
                    printf("\nEnter the data after which you want to insert:\n");
                    scanf("%d",&k);
                    insertMid(d,k,head);
                    break;
                 case 4:
                    printf("\nEnter the data you want to insert at the end:\n");
                    scanf("%d",&d);
                    insertEnd(d,head);
                    break;
                 case 5:
                    head=deleteBeg(head);
                    break;
                 case 6:
                    printf("\nEnter the data which you want to delete from the middle:\n");
                    scanf("%d",&k);
                    deleteMid(head,k);
                    break;
                 case 7:
                    deleteEnd(head);
                    break;
                 default:
                    printf("\nPlease enter a valid option.\n");
            }
        }
     }
     free(head);
 }
