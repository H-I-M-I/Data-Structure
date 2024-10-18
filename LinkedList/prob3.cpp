#include <iostream>
using namespace std;

struct Node
{
    int data;
    struct Node *next;
};

void display(struct Node *ptr)
{
    while (ptr != NULL)
    {
        printf("Element: %d\n", ptr->data);
        ptr = ptr->next;
    }

    cout << endl;
}

void insertInBetween(struct Node *fptr, int ndata)
{
    if (fptr == NULL)
    {
        printf("the given previous node cannot be NULL");
        return;
    }
    struct Node *nptr = new (Node);
    nptr->data = ndata;
    nptr->next = fptr->next;
    fptr->next = nptr;
}

int main()
{
    struct Node *head;
    struct Node *second;
    struct Node *third;
    struct Node *fourth;
    struct Node *fifth;

    head = new (Node);
    second = new (Node);
    third = new (Node);
    fourth = new (Node);
    fifth = new (Node);

    head->data = 7;
    head->next = second;

    second->data = 11;
    second->next = third;

    third->data = 41;
    third->next = fourth;

    fourth->data = 66;
    fourth->next = fifth;

    fifth->data = 78;
    fifth->next = NULL;

    cout << "Linked list before insertion :" << endl;
    display(head);
    insertInBetween(head, 10);
    cout << "Linked list after insertion :" << endl;
    display(head);

    return 0;
}
