#include <iostream>
using namespace std;

int main()
{
    int transpose[10][10], r = 3, c = 4, i, j;
    int a[3][4] = {{4, 2, 8, 2},
                   {9, 7, 1, 9},
                   {0, 2, 7, 5}};
    cout << "The matrix is:" << endl;

    for (i = 0; i < r; ++i)
    {
        for (j = 0; j < c; ++j)
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;

    for (i = 0; i < r; ++i)
        for (j = 0; j < c; ++j)
        {
            transpose[j][i] = a[i][j];
        }

    cout << "The transpose of the matrix is:" << endl;
    for (i = 0; i < c; ++i)
    {
        for (j = 0; j < r; ++j)
        {
            cout << transpose[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}