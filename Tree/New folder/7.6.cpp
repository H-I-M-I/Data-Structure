#include <bits/stdc++.h>
using namespace std;
struct Node {

    char data;
    Node *left, *right;
};

Node* newNode(char data)
{
    Node* node = new Node;
    node->data = data;
    node->left = node->right = NULL;
    return node;
}

void postOrder(Node* root)
{
    if (root == NULL)
        return;

    stack<Node *> s1, s2;

    s1.push(root);
    Node* node;

    while (!s1.empty()) {
        node = s1.top();
        s1.pop();
        s2.push(node);

        if (node->left)
            s1.push(node->left);

        if (node->right)
            s1.push(node->right);
    }

    while (!s2.empty()) {
        node = s2.top();
        s2.pop();
        cout << node->data << " ";
    }
}

int main()
{
    Node* root = NULL;
    root = newNode('A');
    root->left = newNode('B');
    root->right = newNode('C');
    root->left->left = newNode('D');
    root->left->right = newNode('E');
    root->right->left = newNode('F');
    root->right->right = newNode('G');
    root->left->left->left = newNode('H');
    root->right->left->left = newNode('I');
    root->right->right->right = newNode('J');


    char tree[] = {'\0', 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', '\0', '\0', '\0', 'I', '\0', '\0', 'J'};
    cout <<"The Nodes: ";
    for(int i=0;i<=15;i++)
    {
        if(tree[i]!='\0')
        {
            cout<<tree[i]<<" ";
        }
    }

    cout<<"\nPost Order:";
    postOrder(root);
    cout<<endl;

    return 0;
}
