//#include <bits/stdc++.h>
#include <iostream>
using namespace std;


// problematic
int main()
{
	//int a[] = { 0, 4, 3, 2, 7, 8, 2, 3, 1, 9};
    int a[] = {6, 1, 3, 2, 4, 5, 5, 14, 1, 7, 8, 9, 12, 8, 18};
    int i;
	int len = sizeof(a) / sizeof(a[0]);

    cout << "\nElements of the Array :\n";

    for (i = 0; i < len; i++)
    {
        cout << " " << a[i] << " ";
    }
    cout << "\n";
	
	// count the frequency
	for (i = 0; i < len; i++) 
    {
		a[a[i] % len] = a[a[i] % len] + len;
	}

	cout << "The repeating elements are : " << endl;
	for (i = 0; i < len; i++) {
		if (a[i] >= len * 2) 
        {
			cout << i << " ";
		}
	}

	return 0;
}

