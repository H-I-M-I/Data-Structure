#include <iostream>

using namespace std;

struct node
{
    int data;
    node *lchild;
    node *rchild;
};
void inorder(node *root);
node *nptr,*tptr;
void inorder(node *root){
    if(root != NULL){
        inorder(root->lchild);
        cout << root->data << " ";
        inorder(root->rchild);
    }

}

int main()
{
    node *root = NULL;
    int item;
    for(int i = 0; i < 10; i++){


            nptr = new (node);
            cin >> item;
            nptr->data = item;
            nptr->lchild = NULL;
            nptr->rchild = NULL;

            if(i==0)
                root=nptr;
            else{
                tptr=root;
                while(1){
                    if(nptr->data > tptr->data){
                        if(tptr->rchild==NULL){
                            tptr->rchild=nptr;
                            break;
                        }
                        else{
                            tptr=tptr->rchild;
                        }
                    }
                    else{
                        if(tptr->lchild == NULL){
                            tptr->lchild=nptr;
                            break;
                        }
                        else{
                            tptr=tptr->lchild;
                        }
                    }
                }
            }

    }

    cout << endl << "In:";
    inorder(root);
    cout << endl;

}
