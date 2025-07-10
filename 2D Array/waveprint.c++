#include <bits/stdc++.h>
using namespace std;
// Print in wave form Zig zag form
//Important Question
void wavePrint(int arr[3][3], int n, int m)
{
    for (int col = 0; col < m; col++)
    {
        if (col & 1)
        {
            for (int row = n - 1; row >= 0; row--)
            {
                cout << arr[row][col] << " ";
            }
        }
        else
        {
            for (int row = 0; row < n; row++)
            {
                cout << arr[row][col] << " ";
            }
        }
    }
}

int main()
{
    int n = 3, m = 3;
    int arr[3][3] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << arr[i][j] << " "; //   row wise
        }
        cout << endl;
    }
    cout << "Print In Wave form " << endl;
    wavePrint(arr, 3, 3); // print in wave form
    return 0;
}