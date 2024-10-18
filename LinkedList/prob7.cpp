#include <iostream>
#include <conio.h>

using namespace std;

struct node
{
    int data;
    struct node *next;
};
struct node *fptr1, *fptr, *fptr2, *tptr, *cptr, *nptr, *pptr;

void mergeList()
{
    tptr = fptr1;
    while (tptr->next != NULL)
    {
        tptr = tptr->next;
    }
    tptr->next = fptr2;
    fptr2 = tptr;

    cout << endl;
    cptr = fptr1;
    int i = 1;
    while (cptr != NULL)
    {
        cout << "Data for node " << i << ":";
        cout << cptr->data;
        cptr = cptr->next;
        i++;
        cout << endl;
    }

    // displayList();
}

void CreateNodeList1(int arr[])
{

    fptr1 = NULL;
    for (int i = 0; i < 5; i++)
    {
        nptr = new (node);
        nptr->data = arr[i];
        nptr->next = NULL;

        if (fptr1 == NULL)
        {
            fptr1 = nptr;
            cptr = nptr;
        }
        else
        {
            cptr->next = nptr;
            cptr = nptr;
        }
    }
}

void CreateNodeList2(int arr[])
{

    fptr2 = NULL;
    for (int j = 0; j < 4; j++)
    {
        nptr = new (node);
        nptr->data = arr[j];
        nptr->next = NULL;

        if (fptr2 == NULL)
        {
            fptr2 = nptr;
            cptr = nptr;
        }
        else
        {
            cptr->next = nptr;
            cptr = nptr;
        }
    }
}

void displayList()
{
    cptr = fptr;
    int i = 1;
    while (cptr != NULL)
    {
        cout << "Data for node " << i << ":";
        cout << cptr->data;
        cptr = cptr->next;
        i++;
        cout << endl;
    }
}


int main()
{
    int arr1[5], arr2[4];
    cout << "Input nodes for list no.1-" << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << "Enter node for " << i + 1 << ":";
        cin >> arr1[i];
    }
    cout << endl;
    cout << "Input nodes for list no.2-" << endl;
    for (int i = 0; i < 4; i++)
    {
        cout << "Enter node for " << i + 1 << ":";
        cin >> arr2[i];
    }
    CreateNodeList1(arr1);
    CreateNodeList2(arr2);

    mergeList();
}

