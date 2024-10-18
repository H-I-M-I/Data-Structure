#include <iostream>
#define SIZE 5
using namespace std;
 
int main()
{
  int matrix[SIZE][SIZE];
  int sum = 0;

  cout << "Enter elements into the matrix \n";

  for(int i = 0; i < SIZE ; i++){

    for(int j = 0; j < SIZE; j++){

      cin >> matrix[i][j];

      if((i == j)||((i + j) == SIZE-1))
      
        sum += matrix[i][j];
    }
  }

  cout << "Sum of the Diagonal: "<< sum << endl;
  return 0;
}