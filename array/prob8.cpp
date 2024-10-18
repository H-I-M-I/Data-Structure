#include<iostream>
using namespace std;

int main (){
 
 int arr[100][100],sum = 0,row,col;

 cout << "Enter Row and Col: " << endl;
 cin >> row >> col;

 for(int i = 0; i < row; i++){
 
  for(int j = 0; j < col; j++){
  
   cin >> arr[i][j];

  }
 }

 for(int i = 0; i < row; i++){
 
  for(int j = 0; j < col; j++){
  
   if(i == 0 || j == 0 || i == row-1 || j == col-1){
   
    sum+=arr[i][j];

   }
  }
 }

 cout << "Sum of boundary is: " << sum << endl;
 return 0;
 
}