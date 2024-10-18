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

struct Node *deleteAtIndex(struct Node *head, int index)
{
    struct Node *p = head;
    struct Node *q = head->next;
    for (int i = 0; i < index - 1; i++)
    {
        p = p->next;
        q = q->next;
    }

    p->next = q->next;
    free(q);
    return head;
}

int main()
{
    struct Node *head;
    struct Node *second;
    struct Node *third;

    head = new (Node);
    second = new (Node);
    third = new (Node);

    head->data = 7;
    head->next = second;

    second->data = 11;
    second->next = third;

    third->data = 15;
    third->next = NULL;

    cout << "Linked list before deletion :" << endl;
    display(head);

    head = deleteAtIndex(head,1);
    cout << "Linked list after deletion :" << endl;
    display(head);

    return 0;
}
