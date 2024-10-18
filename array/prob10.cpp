#include <iostream>
using namespace std;
 
int main()
{
  int quiz[10][4], min, sum, i, j;
  float avg[10];

  cout << "Enter 4 quizzes of 10 students \n";

  for(i = 0; i < 10; i++)
  {
    for(j = 0; j < 4; j++)
    {
        cin >> quiz[i][j];
    }
  }

  for(i = 0; i < 10 ; i++)
  {
    min = quiz[i][j];
    sum = 0;

    for(j = 0; j < 4; j++)
    {
      sum += quiz[i][j];

      if(min > quiz[i][j])
      {
       min = quiz[i][j];
      }
    }
      avg[i] = ((float)(sum - min))/3;
      cout << "\nAverage of best three quizzes of student "<<i+1<<": "<< avg[i];  
  }
  return 0;
} 