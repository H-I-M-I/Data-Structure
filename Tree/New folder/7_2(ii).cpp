#include <iostream>

using namespace std;

void printPath(int arr[],int k)
{
    if(k<0)
        return;
    else if(k==0)
    {
        cout<<arr[k]<<" ";
        return;
    }
    printPath(arr,(k-1)/2);
    cout<<arr[k]<<" ";
    return;
}

int main()
{
    int tree[10],k=0;
    cout<< "Enter all data in the tree :";
    for(int i=0; i<10; i++)
    {
        cin>>tree[i];
    }
    cout<<endl;
    cout<< "Letf most path in the tree: ";
    while(k<10)
    {
        cout<<tree[k]<<" ";
        k=k*2+1;
    }
    k=0;
    cout<<endl;
    cout<< "Right most path in the tree: ";
    while(k<10)
    {
        cout<<tree[k]<<" ";
        k=k*2+2;
    }
    cout<<endl<<endl;
    k=9;
    while(!((k*2)+1<10))
    {
        cout<< "Path : "<<10-k<<": ";
        printPath(tree,k);
        cout<<endl;
        k--;
    }
    return 0;
}
