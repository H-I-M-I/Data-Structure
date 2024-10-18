#include <iostream>
using namespace std;
int main()
{
    int a[4][3] =  {{4, 2, 8,},
                    {9, 7, 1,},
                    {2, 6, 4,},
                    {0, 2, 7,}}, 
      b[3][4] = {{4, 2, 8, 2},
                 {9, 7, 1, 9},
                 {0, 2, 7, 5}}, 
    m[10][10], r1 = 4, c1 = 3, r2 = 3, c2 = 4, i, j, k, count = 0;

    cout << "the first matrix =\n";
    for (i = 0; i < r1; i++)
    {
        for (j = 0; j < c1; j++)
        {
            cout << a[i][j] <<" ";
        }
        cout << "\n";
    }
    cout << "the second matrix =\n";
    for (i = 0; i < r2; i++)
    {
        for (j = 0; j < c2; j++)
        {
            cout << b[i][j] <<" ";
        }
        cout << "\n";
    }

    cout << "multiplication of the matrix =\n";
    for (i = 0; i < r1; i++)
    {
        for (j = 0; j < c2; j++)
        {
            m[i][j] = 0;
            for (k = 0; k < c1; k++)
            {
                m[i][j] += a[i][k] * b[k][j];
                count++;
            }
        }
    }

    for (i = 0; i < r1; i++)
    {
        for (j = 0; j < c2; j++)
        {
            cout << m[i][j] << " ";
        }
        cout << "\n";
    }

    cout << "Number of multiplication of the matrix = " << r1*c1*c2; 
    cout << "\n";
    cout << "Number of multiplication of the matrix = " << count; 

    return 0;
}