/* C++ Program to remove duplicates from a sorted linked list */
#include <iostream>
using namespace std;

struct Node
{
	int data;
	Node* next;
};

void removeDuplicates(struct Node* head)
{
	struct Node* fptr = head;
	struct Node* tptr;
	
	if (fptr == NULL)
	return;

	while (fptr->next != NULL)
	{
	if (fptr->data == fptr->next->data)
	{
		tptr = fptr->next->next;
		delete(fptr->next);
		fptr->next = tptr;
	}
	else
	{
		fptr = fptr->next;
	}
	}
}

void append(struct Node** head_ref, int new_data)
{
	struct Node* new_node = new (Node);
	struct Node *last = *head_ref;

	new_node->data = new_data;
	new_node->next = NULL;

	if (*head_ref == NULL)
	{
		*head_ref = new_node;
		return;
	}

	while (last->next != NULL)
	{
		last = last->next;
	}

	last->next = new_node;
	return;
}

void printList(struct Node *node)
{
	while (node!=NULL)
	{
		cout<<"  "<<node->data;
		node = node->next;
	}
}

int main()
{
	struct Node* head = NULL;
	
	append(&head, 15);
	append(&head, 20);
	append(&head, 25);
	append(&head, 25);
	append(&head, 30);
	append(&head, 35);
	append(&head, 40);
    append(&head, 40);
    append(&head, 45);
    append(&head, 50);								

	cout<<"linked list before duplicate removal\n";
	printList(head);
	removeDuplicates(head);

	cout<<"\nlinked list after duplicate removal\n";	
	printList(head);			
	
	return 0;
}

