#include <iostream>
using namespace std;

// do it without double for loop
int main()
{
    int arr[] = {6, 1, 3, 2, 4, 5, 5, 14, 1, 7, 8, 9, 12, 8, 18}; 
    int i, j;

    int len = sizeof(arr) / sizeof(arr[0]);

    cout << "\nElements of the Array :\n";

    for (i = 0; i < len; i++)
    {
        cout << " " << arr[i] << " ";
    }
    cout << "\n";

    cout << "Dublicate numbers are:\n";
    for (i = 0; i < len; i++)
    {
        if (arr[i] == arr[j])
        {
            cout << " " << arr[j] << " ";
        }
    
    }
    return 0;
}