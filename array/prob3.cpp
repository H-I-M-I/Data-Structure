#include<iostream>

using namespace std;

int main()
{
   int n, i, eve=0, odd=0;

   cout<<"Enter the size of array: ";
   cin>>n;

   int arr[n];
   cout<<"Enter any "<<n<<" numbers: ";
   for(i=0; i<n; i++)
   {
      cin>>arr[i];
      if(arr[i]%2==0)
         eve += arr[i];
      else
         odd += arr[i];
   }

   cout << "\n\n The " << n << " elements of the array are : ";
    for (i=0; i<n; i++)
    {
        cout<<arr[i] << "  ";
    }

   if(eve==0)
      cout<<"\nEven number not found!";
   else
      cout<<"\nSum of Even Numbers = "<<eve;
   if(odd==0)
      cout<<"\nOdd number not found!";
   else
      cout<<"\nSum of Odd Numbers = "<<odd;
   cout<<endl;
   return 0;
}