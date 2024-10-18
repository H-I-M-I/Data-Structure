#include <iostream>

using namespace std;
void preOrder(int i,int t[]);
void inOrder(int i,int t[]);
void postOrder(int i,int t[]);
int n;

void preOrder(int i,int t[])
{

    if(i < n){
        cout << t[i] <<" ";
        preOrder(2*i+1,t);
        preOrder(2*i+2,t);
    }
}
void inOrder(int i,int t[])
{

    if(i < n){

        preOrder(2*i+1,t);
        cout << t[i] <<" ";
        preOrder(2*i+2,t);
    }
}
void postOrder(int i,int t[])
{

    if(i < n){

        preOrder(2*i+1,t);

        preOrder(2*i+2,t);
        cout << t[i] <<" ";

    }
}


int main()
{

    cout << "Enter range:";
    cin >> n;
    int tree[n];
    cout << "Enter elements:";
    for(int i = 0; i < n; i++){
        cin >> tree[i];
    }
    cout << "Pre order :" << endl;
    preOrder(0, tree);
    cout <<endl << "In order :" << endl;
    inOrder(0, tree);
    cout <<endl << "Post order:" << endl;
    postOrder(0, tree);

}
