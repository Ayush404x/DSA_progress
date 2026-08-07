#include <iostream>
using namespace std;
int main()
{
    int arr[2][4];
    for (int i = 0; i <= 2 - 1; i++) // i is for rows
    {
        for (int j = 0; j <= 4-1; j++) // j is for columns
        {
            cin >> arr[i][j];
        }
    }
        cout<<"The 2d array is \n";
        for (int i = 0; i <= 2-1; i++) // i is for rows
        {
            for (int j = 0; j <= 4-1; j++) // j is for columns
            {
                cout << arr[i][j] << " ";
            }
            cout << endl;
        }
    }
