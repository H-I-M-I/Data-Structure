#include <iostream>
#include <stdlib.h>
using namespace std;

struct node
{
    int num;
    struct node *preptr;
    struct node *nextptr;
} * start_node, *end_node;

void Listcreation(int n)
{
    int i, num;
    struct node *fnNode;

    if (n >= 1)
    {
        start_node = (struct node *)malloc(sizeof(struct node));

        if (start_node != NULL)
        {
            cout << " Enter data for node 1: "; // storing data in the first node
            cin >> num;

            start_node->num = num;
            start_node->preptr = NULL;
            start_node->nextptr = NULL;
            end_node = start_node;
            for (i = 2; i <= n; i++)
            {
                fnNode = (struct node *)malloc(sizeof(struct node));
                if (fnNode != NULL)
                {
                    cout << " Enter data for node " << i << ": ";
                    cin >> num;
                    fnNode->num = num;
                    fnNode->preptr = end_node;  // nexting new nodes
                    fnNode->nextptr = NULL;     // setting the address of last node to NULL
                    end_node->nextptr = fnNode; // previous node is nexting with the new node
                    end_node = fnNode;          // assign new node as last node
                }
                else
                {
                    cout << " Memory can not be allocated.";
                    break;
                }
            }
        }
        else
        {
            cout << " Memory can not be allocated.";
        }
    }
}



void display(int m)
{
    struct node *tmp;
    int n = 1;
    if (start_node == NULL)
    {
        cout << " No data found in the List yet.";
    }
    else
    {
        tmp = start_node;
        if (m == 1)
        {
            cout << "\n Data entered in the list are :\n";
        }
        else
        {
            cout << "\n After deletion the new list are :\n";
        }
        while (tmp != NULL)
        {
            cout << " node " << n << ": " << tmp->num << endl;
            n++;
            tmp = tmp->nextptr; // fptr pointer moves to the next node
        }
    }
}

int main()
{
    int n, num1, a, insPlc;
    start_node = NULL;
    end_node = NULL;

    cout << " Enter the number of nodes : ";
    cin >> n;
    Listcreation(n);
    a = 1;
    display(a);
    cout << " Enter the data to delete a node : ";
    cin >> insPlc;

    return 0;
}
