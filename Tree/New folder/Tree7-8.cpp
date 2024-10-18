#include <iostream>

using namespace std;

struct node
{
    int data;
    node *lchild;
    node *rchild;
};
void inorder(node *root);
void print(node *root);
node *nptr;

node *create(node *root, int item)
{
    if(root == NULL){
        nptr = new (node);
        nptr->data=item;
        nptr->lchild=NULL;
        nptr->rchild=NULL;
        root = nptr;
    }
    else{
        if(item < root->data){
            root->lchild=create(root->lchild, item);
        }
        else if(item > root->data){
            root->rchild=create(root->rchild, item);
        }
        else{
            cout << "Duplicate";
        }
    }
    return root;
}
void inorder(node *root)
{
    if(root != NULL){
        inorder(root->lchild);
        cout << root->data << " ";
        inorder(root->rchild);
    }
}
void print(node *root)
{
    if(root != NULL)
    {
        cout << root->data << " ";
    }
}

int main()
{
    node *root = NULL;
    int item;

    for(int i=0; i < 14; i++){
        cin >> item;
        root = create(root, item);
    }
    cout << endl << "The data:";
    print(root);
    cout << endl << "In order in ascending:";
    inorder(root);
    cout << endl;
}

