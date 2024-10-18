#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
} * sNode;

void createList(int n);
void deleteFirstNode();
void deleteMiddleNode(int pos1);
void deleteLastNode();
void displayList();

int main()
{
    int n, pos;
    printf("Enter the total number of nodes: ");
    scanf("%d", &n);
    createList(n);
    printf("\nData in the list \n");
    displayList();

    printf("\nEnter 1 to delete first node: ");
    scanf("%d", &pos);
    if (pos == 1)
        deleteFirstNode();

    printf("\nAfter delete first node data in the list \n");
    displayList();

    printf("\nEnter the node position I want to delete: ");
    scanf("%d", &pos);
    deleteMiddleNode(pos);

    printf("\nAfter delete I want to delete data in the list \n");
    displayList();
    printf("\nEnter 1 to delete last node: ");
    scanf("%d", &pos);
    if (pos == 10)
        deleteLastNode();

    printf("\nAfter delete last node data in the list \n");
    displayList();
    return 0;
}

void createList(int n)
{
    struct node *nNode, *temp;
    int data, i;

    sNode = (struct node *)malloc(sizeof(struct node));

    if (sNode == NULL)
    {
        printf("Memory can not be allocated");
    }
    else
    {
        printf("Enter the data of node 1: ");
        scanf("%d", &data);

        sNode->data = data;
        sNode->next = NULL;

        temp = sNode;

        for (i = 2; i <= n; i++)
        {
            nNode = (struct node *)malloc(sizeof(struct node));
            if (nNode == NULL)
            {
                printf("Memory can not be allocated");
                break;
            }
            else
            {
                printf("Enter the data of node %d: ", i);
                scanf("%d", &data);

                nNode->data = data;
                nNode->next = NULL;

                temp->next = nNode;
                temp = temp->next;
            }
        }

        printf("linked List Created Successfully\n");
    }
}

void deleteFirstNode()
{
    struct node *toDelete;

    if (sNode == NULL)
    {
        printf("List is already empty.");
    }
    else
    {
        toDelete = sNode;
        sNode = sNode->next;

        printf("\nData deleted = %d\n", toDelete->data);
        free(toDelete);
    }
}
void deleteMiddleNode(int position)
{
    int i;
    struct node *toDelete, *prevNode;

    if (sNode == NULL)
    {
        printf("List is empty.");
    }
    else
    {
        toDelete = sNode;
        prevNode = sNode;

        for (i = 2; i <= position; i++)
        {
            prevNode = toDelete;
            toDelete = toDelete->next;

            if (toDelete == NULL)
                break;
        }

        if (toDelete != NULL)
        {
            if (toDelete == sNode)
                sNode = sNode->next;

            prevNode->next = toDelete->next;
            toDelete->next = NULL;

            free(toDelete);

            printf("Successfully Deleted Node From Middle Of List\n");
        }
        else
        {
            printf("Invalid position");
        }
    }
}
void deleteLastNode()
{
    struct node *toDelete, *secondLastNode;

    if (sNode == NULL)
    {
        printf("List is empty.");
    }
    else
    {
        toDelete = sNode;
        secondLastNode = sNode;
        while (toDelete->next != NULL)
        {
            secondLastNode = toDelete;
            toDelete = toDelete->next;
        }

        if (toDelete == sNode)
        {
            sNode = NULL;
        }
        else
        {
            secondLastNode->next = NULL;
        }
        free(toDelete);
    }
}

void displayList()
{
    struct node *temp;
    if (sNode == NULL)
    {
        printf("List is empty.");
    }
    else
    {
        temp = sNode;
        while (temp != NULL)
        {
            printf("Data = %d\n", temp->data);
            temp = temp->next;
        }
    }
}
