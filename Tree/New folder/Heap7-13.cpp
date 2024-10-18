#include <iostream>

using namespace std;

int main()
{

    int arr[10];
    cout << "Elements:";
    for(int i=1; i<=10; i++){
        cin >> arr[i];
    }
    int n=sizeof(arr)/sizeof(arr[0]);
    int temp,k,c=0;

    for(int i=2; i<=n; i++){
        temp=arr[i];
        k=i;

        while(k>0 && arr[k/2]<temp){
            arr[k]=arr[k/2];
            k=k/2;
        }
        arr[k]=temp;
    }

    cout << "The data before sorting:";
    for(int i=1; i<=n; i++){
        cout << arr[i] <<" ";
    }

    for(int j=n; j>1; j--){
        int tmp,i,s;
        i=2;s=j-1;
        tmp=arr[j];
        arr[j]=arr[1];

        while(i<s){

            if(arr[i]<arr[i+1])
                i=i+1;
            if(tmp>=arr[i]) break;
            arr[i/2]=arr[i];
            i=2*i;
        c++;
        }
        arr[i/2]=tmp;


}

  cout <<endl << "Sorted data:";
  for(int i=1; i<n; i++){
        if(arr[1]>arr[2]){
            int tmp=arr[1];
            arr[1]=arr[2];
            arr[2]=tmp;
        }
    cout << arr[i] << " ";
  }
  cout << endl << "Required number of data comparisons:" << c+1;

}
