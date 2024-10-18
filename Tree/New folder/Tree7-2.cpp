#include <iostream>

using namespace std;

int main()
{

    int tree[10];
    cout << "Elements:";
    for(int i=0; i<10; i++){
        cin >> tree[i];
    }
    int k=0;
    cout << "Leftmost path from root to leaf:";
    while(k < 4){
        cout << tree[2*k+1] <<"  ";
        k=2*k+1;

    }
    int p=0;
    cout << endl << "Rightmost path from root to leaf:";
    while(p < 4){
        cout << tree[2*p+2] <<"  ";
        p=2*p+2;

    }
    int q=0;
    cout <<endl << "All data:";
    while(q < 10){
        cout << tree[q] << " ";
        q++;
    }

}
