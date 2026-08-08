#include <iostream>
using namespace std;
int main()
{
    int m;
    cout << "Enter the no rows \n";
    cin >> m;
    int n;
    cout << "Enter the no columns \n";
    cin >> n;
    int arr[m][n];
    for (int i = 0; i <= m - 1; i++) // i is for rows
    {
        for (int j = 0; j <= n - 1; j++) // j is for columns
        {
            cin >> arr[i][j];
        }
    }
    cout << "The 2d array is \n";
    for (int i = 0; i <= m - 1; i++) // i is for rows
    {
        for (int j = 0; j+1 <= n - 1; j++) // j is for columns
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;

        // printing_transpose
        for (int j = 0; j < n; j++)
        {
            for (int i = 0; i < m; i++)
            {
                cout << arr[i][j] << " ";
            }
        }
    }
}
