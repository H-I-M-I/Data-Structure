#include <iostream>
/*#include <stdlib.h>
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
        start_node = new (node);

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

void DeleteAnyNode(int pos)
{
    struct node *curNode;
    int i;

    curNode = start_node;
    while (curNode->num != pos)
    {
        curNode = curNode->nextptr;
    }

        curNode->preptr->nextptr = curNode->nextptr;
        curNode->nextptr->preptr = curNode->preptr;

        free(curNode); // Deleting nth the node
}

void DeleteFirstnode() // deleting the first node
{
    struct node *NodeToDel;
    if (start_node == NULL) // checking if the first node is the last node or not
    {
        cout << " Delete is not possible. No data in the list.\n";
    }
    else
    {
        NodeToDel = start_node;
        start_node = start_node->nextptr;
        start_node->preptr = NULL;
        free(NodeToDel);
    }
}

void DeleteLastnode() // deleting the last node
{
    struct node *NodeToDel;

    if (end_node == NULL) // checking whether the list has any nodes or not
    {
        cout << " Delete is not possible. No data in the list.\n";
    }
    else
    {
        NodeToDel = end_node;
        end_node = end_node->preptr;
        end_node->nextptr = NULL;
        free(NodeToDel);
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

    if (insPlc < 1 || insPlc > n)
    {
        cout << "\n Invalid position. Try again.\n ";
    }
    if (insPlc >= 1 && insPlc <= n)
    {

        DeleteAnyNode(insPlc);
        a = 2;
        display(a);
    }
    return 0;
}  */

// C++ program to delete a node from
// Doubly Linked List
//#include <bits/stdc++.h>
using namespace std;

// Anode of the doubly linked list
struct Node
{
    int data;
    Node *next;
    Node *prev;
};

/* Function to delete a node in a Doubly
Linked List. head_ref --> pointer to
head node pointer. del --> pointer to
node to be deleted. */
void deleteNode(Node **head_ref, Node *del)
{
    // Base case
    if (*head_ref == NULL || del == NULL)
        return;

    // If node to be deleted is head node
    if (*head_ref == del)
        *head_ref = del->next;

    /* Change next only if node to be
    deleted is NOT the last node */
    if (del->next != NULL)
        del->next->prev = del->prev;

    /* Change prev only if node to be
    deleted is NOT the first node */
    if (del->prev != NULL)
        del->prev->next = del->next;

    /* Finally, free the memory occupied
    by del*/
    delete (del);
    return;
}

// UTILITY FUNCTIONS
/* Function to insert a node at the
beginning of the Doubly Linked List */
void push(Node **head_ref, int new_data)
{
    // Allocate node
    Node *new_node = new Node();

    // Put in the data
    new_node->data = new_data;

    /* Since we are adding at the
    beginning, prev is always NULL */
    new_node->prev = NULL;

    /* Link the old list off the
    new node */
    new_node->next = (*head_ref);

    /* Change prev of head node to
    new node */
    if ((*head_ref) != NULL)
        (*head_ref)->prev = new_node;

    /* Move the head to point to the
    new node */
    (*head_ref) = new_node;
}

/* Function to print nodes in a given
doubly linked list. This function is
same as printList() of singly linked list */
void printList(Node *node)
{
    while (node != NULL)
    {
        cout << "\n" << node->data;
        node = node->next;
    }
}

// Driver code
int main()
{
    // Start with the empty list
    Node *head = NULL;

    /* Let us create the doubly linked list
    10<->8<->4<->2 */
    push(&head, 2);
    push(&head, 4);
    push(&head, 8);
    push(&head, 10);

    cout << "Original Linked list :";
    printList(head);
    cout << "\n";

    /* Delete nodes from the doubly
    linked list */
    // Delete first node
    deleteNode(&head, head);

    // Delete middle node
    // deleteNode(&head, head->next);

    // Delete last node
    // deleteNode(&head, head->next);

    /* Modified linked list will be
    NULL<-8->NULL */
    cout << "Modified Linked list :";
    printList(head);

    return 0;
}
