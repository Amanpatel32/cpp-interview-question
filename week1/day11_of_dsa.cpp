#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int n = 5;

    for (int row = 1; row <= n; row++)
    {
        for (int col = 1; col <= 5 - (row - 1); col++)
        {
            cout << col << " ";
        }
        cout << endl;
    }
}