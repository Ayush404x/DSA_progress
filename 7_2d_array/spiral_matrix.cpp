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
    cout<<endl;
    int minr = 0;
    int minc = 0;
    int maxr = m-1;
    int maxc = n-1;
    while(minr<=maxr && minc<=maxc)
    {
       // Spiral Traversal

int minr = 0, minc = 0;
int maxr = m - 1, maxc = n - 1;

while (minr <= maxr && minc <= maxc)
{
    // Right
    for (int j = minc; j <= maxc; j++)
    {
        cout << arr[minr][j] << " ";
    }
    minr++;
    if(minr<=maxr || minc>maxc)
    // Down
    for (int i = minr; i <= maxr; i++)
    {
        cout << arr[i][maxc] << " ";
    }
    maxc--;

    // Left
    for (int j = maxc; j >= minc; j--)
    {
        cout << arr[maxr][j] << " ";
    }
    maxr--;

    // Up
    for (int i = maxr; i >= minr; i--)
    {
        cout << arr[i][minc] << " ";
    }
    minc++;
    }
}