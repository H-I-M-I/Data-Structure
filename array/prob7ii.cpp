#include<iostream>
using namespace std;

int main()
{
    int arrOne[50], arrTwo[50], arrMerge[100];
    int size1,size2, Merge, i, j, temp;

    cout<<"Enter the Size for first Array: ";
    cin>>size1;

    cout<<"Enter the Size for second Array: ";
    cin>>size2;

    cout<<"\nEnter "<<size1<<" Elements for First Array: ";
    for(i=0; i<size1; i++)
    {
        cin>>arrOne[i];
    }

    cout<<"\nEnter "<<size2<<" Elements for Second Array: ";
    for(i=0; i<size2; i++)
    {
        cin>>arrTwo[i];
    }

    for(i=0; i<size1; i++)
    {
        arrMerge[i] = arrOne[i];
    }
    for(j=0; j<size2; j++)
    {
        arrMerge[i] = arrTwo[j];
        i++;
    }
    Merge = i;
    
    
    for(j=0; j<(Merge-1); j++)
    {
        for(i=0; i<(Merge-1); i++)
        {
            if(arrMerge[i]>arrMerge[i+1])
            {
                temp = arrMerge[i];
                arrMerge[i] = arrMerge[i+1];
                arrMerge[i+1] = temp;
            }
        }
    }
    cout<<"\nThe New Array (Merged Array):\n";

    for(i=0; i<Merge; i++)
    {
        if(i==(Merge-1))
            cout<<arrMerge[i];
        else
            cout<<arrMerge[i]<<" ";
    }

    cout<<endl;
    return 0;
}