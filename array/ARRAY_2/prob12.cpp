#include <iostream>
using namespace std;

int main()
{
    int mat[4][4] = {{4, 2, 8, 3},
                     {9, 7, 1, 4},
                     {2, 6, 4, 5},
                     {0, 2, 7, 1}};
    int i, j, r = 4, c = 4, temp;

    cout << "The matrix is:" << endl;

    for (i = 0; i < r; ++i)
    {
        for (j = 0; j < c; ++j)
        {
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;

    for (i = 0; i < r; i++)
    {
        for (j = 0; j < i; j++)
        {
            temp = mat[i][j];
            mat[i][j] = mat[j][i];
            mat[j][i] = temp;
        }
    }

    cout << "The transpose of the matrix is:" << endl;
    for (i = 0; i < c; ++i)
    {
        for (j = 0; j < r; ++j)
        {
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}