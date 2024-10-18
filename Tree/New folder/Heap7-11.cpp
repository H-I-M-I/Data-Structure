#include<iostream>

using namespace std;

int main()
{

    int arr[]={43,12,34,90,78,86,55,44};
    int temp,k;
    int n=sizeof(arr)/sizeof(arr[0]);

    for(int i=2; i<=n; i++){
        temp=arr[i];

        k=i;

        while(k>0 && arr[k/2]<temp){
            arr[k]=arr[k/2];
            k = k/2;
        }
        arr[k]=temp;
    }

    for(int i=1; i<=n; i++){
        cout << arr[i] <<" ";

    }
    cout << endl <<"Parent="<< arr[(k-1)/2] << endl;

    cout << "Left childs:";
    for(int i=1; i<=n-4; i++){
        cout << arr[2*i] <<" ";
    }
    cout <<endl << "Right childs:";
    for(int i=1; i<=n-5; i++){
        cout << arr[2*i+1] <<" ";
    }

}
