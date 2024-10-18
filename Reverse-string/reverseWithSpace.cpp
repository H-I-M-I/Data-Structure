#include <bits/stdc++.h>
using namespace std;

// Function to reverse a string
void revStr(string &strg)
{
    for (int i = strg.length() - 1; i >= 0; i--)
    {
        cout << strg[i];
    }
}

int main()
{
    string strg = "Hello world himi";
    revStr(strg);
    return 0;
}