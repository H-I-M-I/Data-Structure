#include <bits/stdc++.h>

using namespace std;

struct node
{
    int data;
    struct node *next;
};

void removeduplicates(node *head)

{
    node *curr = head;
    node *nextofcurr;
    if (curr == nullptr)
    {
        return;
    }

    while (curr->next != nullptr)
    {

        if (curr->data == curr->next->data)
        {
            nextofcurr = curr->next->next;
            free(curr->next);
            curr->next = nextofcurr;
        }
        else
        {
            curr = curr->next;
        }
    }
}

void append(struct node **headr, int new_val)
{
    struct node *new_node = new node();

    new_node->data = new_val;

    new_node->next = (*headr);

    *headr = new_node;
}

int main()
{
    struct node *head = NULL;
    int size;

    cout << "Enter the number of nodes in the list- ";
    cin >> size;

    cout << "Enter the nodes in the list- ";

    for (int i = 0; i < size; i++)
    {
        int a;
        cin >> a;
        append(&head, a);
    }

    removeduplicates(head);

    while (head != nullptr)
    {
        cout << head->data << " ";

        head = head->next;
    }

    return 0;
}