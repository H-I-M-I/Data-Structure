#include <iostream>
using namespace std;
int main()
{
    int A[5][4] = {{4, 2, 1, 2},
                   {1, 2, 3, 4},
                   {0, 2, 1, 2},
                   {1, 1, 2, 3},
                   {0, 2, 1, 3}},
        B[4][3] =  {{4, 2, 8},
                    {9, 7, 1},
                    {2, 6, 4},
                    {0, 2, 7}}, 
        C[3][6] = {{4, 2, 8, 2, 1, 3},
                   {9, 7, 1, 9, 3, 0},
                   {0, 2, 7, 5, 4, 8}}, 

    m1[10][10], m2[10][10], M1[10][10], M2[10][10], r1 = 5, c1 = 4, r2 = 4, c2 = 3, r3 = 3, 
    c3 = 6, i, j, k, count1 = 0, count2 = 0;

    for (i = 0; i < r1; i++)
    {
        for (j = 0; j < c2; j++)
        {
            m1[i][j] = 0;
            for (k = 0; k < c1; k++)
            {
                m1[i][j] += A[i][k] * B[k][j];
                count1++;
            }
        }
    }

    cout << "(A.B).C =\n";
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 6; j++)
        {
            M1[i][j] = 0;
            for (k = 0; k < 3; k++)
            {
                M1[i][j] += m1[i][k] * C[k][j];
                count1++;
            }
        }
    }

    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 6; j++)
        {
            cout << M1[i][j] << " ";
        }
        cout << "\n";
    }

    for (i = 0; i < r2; i++)
    {
        for (j = 0; j < c3; j++)
        {
            m2[i][j] = 0;
            for (k = 0; k < c2; k++)
            {
                m2[i][j] += B[i][k] * C[k][j];
                count2++;
            }
        }
    }

    cout << "(B.C).A =\n";
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 6; j++)
        {
            M2[i][j] = 0;
            for (k = 0; k < 4; k++)
            {
                M2[i][j] += m2[i][k] * A[k][j];
                count2++;
            }
        }
    }

    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 6; j++)
        {
            cout << M2[i][j] << " ";
        }
        cout << "\n";
    }

    cout << "\n";
    cout << "Number of multiplication of the matrix (A.B).C = " << count1;
    cout << "\n\n"; 
    cout << "Number of multiplication of the matrix A.(B.C) = " << count2; 

    return 0;
}