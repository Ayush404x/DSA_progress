#include <iostream>
using namespace std;

int main()
{
    int m, n;
    cout << "Enter the rows and columns of first matrix: ";
    cin >> m >> n;

    int p, q;
    cout << "Enter the rows and columns of second matrix: ";
    cin >> p >> q;

    // Matrix multiplication is possible only when
    // columns of first matrix == rows of second matrix
    if (n != p)
    {
        cout << "The matrices cannot be multiplied.";
        return 0;
    }

    int a[m][n];
    int b[p][q];

    // Input first matrix
    cout << "Enter elements of first matrix:\n";

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> a[i][j];
        }
    }

    // Input second matrix
    cout << "Enter elements of second matrix:\n";

    for (int i = 0; i < p; i++)
    {
        for (int j = 0; j < q; j++)
        {
            cin >> b[i][j];
        }
    }

    // Result matrix will have m rows and q columns
    int res[m][q];

    // Matrix multiplication
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < q; j++)
        {
            res[i][j] = 0;

            for (int k = 0; k < n; k++)
            {
                res[i][j] += a[i][k] * b[k][j];
            }
        }
    }

    // Print result
    cout << "Resultant matrix:\n";

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < q; j++)
        {
            cout << res[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}