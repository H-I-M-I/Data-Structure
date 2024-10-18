#include <iostream>
#include <stack>
using namespace std;

struct Node
{
    char data;
    struct Node* left;
    struct Node* right;
    Node (char data)
    {
        this->data = data;
        left = right = NULL;
    }
};

void InOrder(Node *root)
{
	stack<Node*> stack;
	Node *curr = root;

	while (!stack.empty() || curr != NULL)
	{
		if (curr != NULL)
		{
			stack.push(curr);
			curr = curr->left;
		}
		else
		{
			curr = stack.top();
			stack.pop();
			cout << curr->data << " ";
			curr = curr->right;
		}
	}
}

int main() {

    char tree[] = {'\0', 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', '\0', '\0', '\0', 'I', '\0', '\0', 'J'};
    cout <<"The Nodes: ";
    for(int i=0;i<=15;i++)
    {
        if(tree[i]!='\0')
        {
            cout<<tree[i]<<" ";
        }
    }
    cout<<endl;

    struct Node *root = new Node('A');
    root->left        = new Node('B');
    root->right       = new Node('C');
    root->left->left  = new Node('D');
    root->left->right = new Node('E');
    root->right->left = new Node('F');
    root->right->right = new Node('G');
    root->left->left->left = new Node('H');
    root->right->left->left = new Node('I');
    root->right->right->right = new Node('J');

    cout<<"In Order: ";
    InOrder(root);
  return 0;
}
