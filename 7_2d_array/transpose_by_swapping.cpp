#include <iostream>
using namespace std;

int main()
{
    int m, n;

    cout << "Enter the number of rows/columns: ";
    cin >> m;

    int arr[m][m];

    cout << "Enter the matrix elements:\n";

    // Input matrix
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
        }
    }

    // printing array normaly
    cout<<"printing input array";
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
        // transpose matrix
        for (int i = 0; i < m; i++)
        {
            for (int j = i+1; j < m; j++)
            {
                // swapping of i,j and j,i
                int temp = arr[i][j];
                arr[i][j] = arr[j][i];
                arr[j][i] = temp;
            }
        }
        // Print transpose
        cout << "\nTranspose Matrix:\n";
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cout << arr[i][j] << " ";
            }
            cout << endl;
        }
        return 0;
    }