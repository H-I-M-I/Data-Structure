#include <iostream>
using namespace std;

/*void preorder(int i, char t[]);
void inorder(int i, char t[]);
void postorder(int i, char t[]); */

void preorder(int i, char t[])
{
    if(i < 10){
        cout << t[i] << " ";
        preorder(2*i+1, t);
        preorder(2*i+2,t);
    }
}
void inorder(int i, char t[])
{
    if(i < 10){

        preorder(2*i+1, t);
        cout << t[i] << " ";
        preorder(2*i+2,t);
    }
}
void postorder(int i, char t[])
{
    if(i < 10){

        preorder(2*i+1, t);
        preorder(2*i+2, t);
        cout << t[i] << " ";
    }
}


int main()
{
    char tree[15]={'a','b','c','d','e','f','g','h',' ',' ',' ','i',' ',' ','j'};
    cout << "Pre-order :";
    preorder(0, tree);
    cout << endl << "In-order :" ;
    inorder(0, tree);
    cout << endl << "Post-order :" ;
    postorder(0, tree);

}

