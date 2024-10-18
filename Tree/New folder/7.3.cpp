#include <iostream>
using namespace std;
void pre(int tree[],int i)
{
    cout<<tree[i]<<" ";
    if(2*i+1 <10)
    {
        pre(tree,2*i+1);
    }
    if (2*i+2 <10)
    {
        pre(tree,2*i+2);
    }
}

void inorder(int tree[],int i)
{
    if(2*i+1 <10)
    {
        inorder(tree,2*i+1);
    }
    cout<<tree[i]<<" ";
    if (2*i+2 <10)
    {
        inorder(tree,2*i+2);
    }
    return;
}
void post(int tree[],int i)
{
    if(2*i+1 <10)
    {
        pre(tree,2*i+1);
    }
    if (2*i+2 <10)
    {
        pre(tree,2*i+2);
    }
    cout<<tree[i]<<" ";
    return;
}
int main()
{
    int tree[10],x;
    cout<<"Input integer : ";
    cout<<endl;
    for (int i = 0; i < 10; ++i)
    {
        cin>>tree[i];
    }
    cout<<"Pre-order method:";
    pre(tree,0);
    cout<<endl;
    cout<<"In-order method:";
    inorder(tree,0);
    cout<<endl;
    cout<<"Post-order method:";
    post(tree,0);
}
