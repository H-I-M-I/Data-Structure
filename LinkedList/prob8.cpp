
#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node * preNode;
    struct node * nextNode;
}*sNode, *lNode;
void createList(int n);
void displayListFromFirst();
void displayListFromReverse();


int main()
{
    int n;
    sNode = NULL;
    lNode = NULL;
    printf("\nInput the number of nodes: ");
    scanf("%d", &n);
    createList(n);
    displayListFromFirst();
    displayListFromReverse();
    return 0;

}
void createList(int n)
{
    int i, data;
    struct node *nNode;

    if(n >= 1)
    {
        sNode = (struct node *)malloc(sizeof(struct node));

        if( sNode != NULL)
        {
            printf("Enter data of 1 node: ");
            scanf("%d", &data);

            sNode->data = data;
            sNode->preNode = NULL;
            sNode->nextNode = NULL;

            lNode = sNode;

            for(i=2; i<=n; i++)
            {
                nNode = (struct node *)malloc(sizeof(struct node));

                if(nNode != NULL)
                {
                    printf("Enter data of %d node: ", i);
                    scanf("%d", &data);

                    nNode->data = data;
                    nNode->preNode = lNode;
                    nNode->nextNode = NULL;

                    lNode->nextNode = nNode;
                    lNode = nNode;
                }
                else
                {
                    printf("Memory can not be allocated");
                    break;
                }
            }
        }
        else
        {
            printf("Memory can not be allocated");
        }
    }
}

void displayListFromFirst()
{
    struct node * temp;
    int n = 1;

    if(sNode == NULL)
    {
        printf("List is empty.");
    }
    else
    {
        temp = sNode;
        printf("\nData in the list from input order:\n");

        while(temp != NULL)
        {
            printf("Data of %d node = %d\n", n, temp->data);
            n++;
            temp = temp->nextNode;
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
