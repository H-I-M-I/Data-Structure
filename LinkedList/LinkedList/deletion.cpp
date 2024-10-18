

#include <stdlib.h>
#include <iostream>
using namespace std;

struct Node
{
    int data;
    struct Node *next;
};

void insertAtBeginning(struct Node **head_ref, int new_data)
{
    // Allocate memory to a node
    struct Node *new_node = (struct Node *)malloc(sizeof(struct Node));
    new_node->data = new_data;
    new_node->next = (*head_ref);
    (*head_ref) = new_node;
}

void insertAfter(struct Node *prev_node, int new_data)
{
    if (prev_node == NULL)
    {
        cout << "the given previous node cannot be NULL";
        return;
    }

    struct Node *new_node = (struct Node *)malloc(sizeof(struct Node));
    new_node->data = new_data;
    new_node->next = prev_node->next;
    prev_node->next = new_node;
}

void insertAtEnd(struct Node **head_ref, int new_data)
{
    struct Node *new_node = (struct Node *)malloc(sizeof(struct Node));
    struct Node *last = *head_ref; /* used in step 5*/

    new_node->data = new_data;
    new_node->next = NULL;

    if (*head_ref == NULL)
    {
        *head_ref = new_node;
        return;
    }

    while (last->next != NULL)
        last = last->next;

    last->next = new_node;
    return;
}

void deleteNode(struct Node **head_ref, int key)
{
    struct Node *temp = *head_ref, *prev;

    if (temp != NULL && temp->data == key)
    {
        *head_ref = temp->next;
        free(temp);
        return;
    }
    // Find the key to be deleted
    while (temp != NULL && temp->data != key)
    {
        prev = temp;
        temp = temp->next;
    }

    if (temp == NULL)
        return;
    prev->next = temp->next;

    free(temp);
}

void printList(struct Node *node)
{
    while (node != NULL)
    {
        cout << node->data << " ";
        node = node->next;
    }
}


int main()
{
    struct Node *head = NULL;

    insertAtEnd(&head, 1);
    insertAtBeginning(&head, 2);
    insertAtBeginning(&head, 3);
    insertAtEnd(&head, 4);
    insertAfter(head->next, 5);

    cout << " Linked list: ";
    printList(head);

    int p;
    cout << "\n Data to delete :";
    cin >> p;
    cout << "\n After deleting an element: ";
    deleteNode(&head, p);
    printList(head);

}