#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node * preNode;
    struct node * nextNode;
}*sNode, *lNode;

void createList(int n)
{
    int i, data;
    struct node *nNode;
    if(n >= 1)
    {
        sNode = (struct node *)malloc(sizeof(struct node));
        printf("Enter data of 1 node: ");
        scanf("%d", &data);
        sNode->data = data;
        sNode->preNode = NULL;
        sNode->nextNode = NULL;
        lNode = sNode;
        for(i=2; i<=n; i++)
        {
            nNode = (struct node *)malloc(sizeof(struct node));
            printf("Enter data of %d node: ", i);
            scanf("%d", &data);
            nNode->data = data;
            nNode->preNode = lNode;
            nNode->nextNode = NULL;
            lNode->nextNode= nNode;
            lNode = nNode;
        }

    }
}

void displayList()
{
    struct node * temp;
    int n = 1;
    if(sNode == NULL)
    {
        printf("List is empty\n");
    }
    else
    {
        temp = sNode;
        printf("Data in the list:\n");

        while(temp != NULL)
        {
            printf("Data of %d node = %d\n", n, temp->data);
            n++;
            temp = temp->nextNode;
        }
    }
}
void insertBegin(int data)
{
    struct node * nNode;

    if(sNode== NULL)
    {
        printf("List is Empty!\n");
    }
    else
    {
        nNode = (struct node *)malloc(sizeof(struct node));
        nNode->data = data;
        nNode->nextNode = sNode;
        nNode->preNode = NULL;
        sNode->preNode = nNode;
        sNode = nNode;
    }
}
void insertEnd(int data)
{
    struct node * nNode;
    if(lNode== NULL)
    {
        printf(" List is empty!\n");
    }
    else
    {
        nNode = (struct node *)malloc(sizeof(struct node));
        nNode->data = data;
        nNode->nextNode = NULL;
        nNode->preNode = lNode;
        lNode->nextNode = nNode;
        lNode = nNode;

    }
}

void insertMid(int data, int position)
{
    int i;
    struct node * nNode, *temp;
    if(sNode == NULL)
    {
        printf("List is empty!\n");
    }
    else
    {
        temp = sNode;
        i=1;
        while(i<position-1 && temp!=NULL)
        {
            temp = temp->nextNode;
            i++;
        }
        if(position == 1)
        {
            insertBegin(data);
        }
        else if(temp == lNode)
        {
            insertEnd(data);
        }
        else if(temp!=NULL)
        {
            nNode = (struct node *)malloc(sizeof(struct node));
            nNode->data = data;
            nNode->nextNode = temp->nextNode;
            nNode->preNode = temp;
            if(temp->nextNode != NULL)
            {
                temp->nextNode->preNode = nNode;
            }
            temp->nextNode = nNode;
        }
        else
        {
            printf("Invalid position\n");
        }
    }
}
void displayListFromReverse()
{
    struct node * temp;
    int n = 0;

    if(lNode == NULL)
    {
        printf("List is empty.");
    }
    else
    {
        temp = lNode;
        printf("\n\nData in the list from reverse:\n");
        while(temp != NULL)
        {
            printf("Data of last %d node = %d\n", n, temp->data);
            n++;
            temp = temp->preNode;
        }
    }
}

int main()
{
    int n, data;
    sNode = NULL;
    lNode = NULL;
    printf("\nInput the number of nodes: ");
    scanf("%d", &n);
    createList(n);
    printf("Enter data of first node : ");
    scanf("%d", &data);
    insertBegin(data);
    displayList();
    printf("Enter data of last node : ");
    scanf("%d", &data);
    insertEnd(data);
    displayList();
    printf("Enter the position where I want to insert new node: ");
    scanf("%d", &n);
    printf("Enter data of %d node : ", n);
    scanf("%d", &data);
    insertMid(data, n);
    displayList();
    void displayListFromReverse();
}
