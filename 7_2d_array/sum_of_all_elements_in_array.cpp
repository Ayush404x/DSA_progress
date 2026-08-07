#include <iostream>
#include <climits>
using namespace std;

int main()
{
    int sum=0;
    int m;
    cout << "Enter the no of rows: ";
    cin >> m;

    int n;
    cout << "Enter the no of columns: ";
    cin >> n;

    int arr[m][n];

    // Input matrix
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }

    int max = INT_MIN;

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            //sum = sum+arr[i][j];
           sum +=arr[i][j];
        }
    }

    cout << "sumof elements is = " << sum << endl;

    return 0;
}