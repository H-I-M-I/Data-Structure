#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;
} * ptr; 

void createList(int n) 
{
    struct Node *fptr, *p;
    int data, i;

    ptr = new (Node);
    if (ptr == NULL)
    {
        cout << " Memory can not be allocated";
    }
    else
    {
        cout << "Enter the data for Node 1: ";
        cin >> data;
        ptr->data = data;
        ptr->next = NULL; 
        p = ptr;

        for (i = 2; i <= n; i++)
        {
            fptr = new (Node);

            if (fptr == NULL)
            {
                cout << " Memory can not be allocated";
                break;
            }
            else
            {
                cout << "Enter the data for Node " << i << ": ";
                cin >> data;
                fptr->data = data;
                fptr->next = NULL;
                p->next = fptr;
                p = p->next;
            }
        }
    }
}

void display()
{
    struct Node *p;
    if (ptr == NULL)
    {
        cout << " No data found in the list";
    }
    else
    {
        p = ptr;
        cout << "linked List: ";
        while (p != NULL)
        {
            cout << "\t" << p->data;
            p = p->next;
        }
    }
}


int main()
{
    int n, data;

    cout << "Enter number of Nodes : ";
    cin >> n;
    createList(n);

    cout << "\nlinked list data: \n";
    display();

    return 0;
}

