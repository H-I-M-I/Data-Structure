#include <iostream>
using namespace std;

struct Node
{
    int data;
    struct Node *next;
};

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

    struct Node *ptr = head;

    while (ptr != NULL)
    {
        printf("Element: %d\n", ptr->data);
        ptr = ptr->next;
    }

    cout << endl;

    return 0;
}
