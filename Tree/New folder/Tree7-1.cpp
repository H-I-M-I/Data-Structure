#include <iostream>
#include<stdio.h>

using namespace std;

int main()
{
    int n,p;
    cout << "Enter range:";
    cin >> n;
    int tree[n];
    cout << "Enter elements:";
    for(int i=0; i<n; i++){

         cin >> tree[i] ;
    }
    int k=0;
    cout << "Data in a row:" << endl << endl;
    while(k < n){
        cout <<"For index " << k <<":" << tree[k] << " " << endl;
        k++;
    }
    cout << "Enter index:";
    cin >> p;
    //for(int i=0; i<n; i++){
        if(p==0){
            cout <<"Children:" << tree[2*p+1] <<" , " << tree[2*p+2] << endl;
            cout << "No Parent";
        }else{
            cout <<"Children:" << tree[2*p+1] <<" , " << tree[2*p+2] << endl;
            cout <<"Parent:" << tree[p-1];
        }
}
