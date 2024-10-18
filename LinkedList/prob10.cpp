#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node * preNode;
    struct node * nextNode;
}*sNode, *lNode;
void createList(int n);
void displayList();
void deleteFromMid(int pos);
void displayListFromReverse();
int main()
{
    int n, data;
    sNode = NULL;
    lNode = NULL;
    printf("\nInput the number of nodes: ");
    scanf("%d", &n);
    createList(n);
    printf("Enter the node position which I want to delete: ");
    scanf("%d", &n);
    deleteFromMid(n);
    displayList();
    displayListFromReverse();
}
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

        lNode =sNode;
        for(i=2; i<=n; i++)
        {
            nNode = (struct node *)malloc(sizeof(struct node));
            printf("Enter data of %d node: ", i);
            scanf("%d", &data);
            nNode->data = data;
            nNode->preNode = lNode;
            nNode->nextNode = NULL;
            lNode->nextNode = nNode;
            lNode = nNode;
        }

    }
    printf("\n");
}
void displayList()
{
    struct node * temp;
    int n = 1;
    if(sNode == NULL)
    {
        printf("List is empty.\n");
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
void deleteFromMid(int pos)
{
    struct node *current;
    int i;
    current = sNode;
    for(i=1; i<pos && current!=NULL; i++)
    {
        current = current->nextNode;
    }
    if(current != NULL)
    {
        current->preNode->nextNode = current->nextNode;
        current->nextNode->preNode = current->preNode;
        free(current);
    }
    else
    {
        printf("Invalid position!\n");
    }
}
void displayListFromReverse()
{
    struct node * temp;
    int n = 1;
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

