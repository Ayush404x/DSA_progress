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
    int p;
    cout<<"enter the rows of second matrix";
    cin>>p;
    int q;
    cout << "Enter the no columns \n";
    cin>>q;
    if(n==p)
    {
        int arr[m][n];
        int arr[p][q];
    for (int i = 0; i <= m - 1; i++) // i is for rows
    {
        for (int j = 0; j <= n - 1; j++) // j is for columns
        {
            cin >> arr[i][j];
        }
    }
    for (int i = 0; i <= p - 1; i++) // i is for rows
    {
        for (int j = 0; j <= q - 1; j++) // j is for columns
        {
            cin >> arr[p][q];
        }
    }
        int res[m][n];
        for(int i =0;i<m;i++){
            for(int j =0;i<n;j++)
            {
                //res of i and j
                //res[i][j] = a[i][0]+b[0][j]+a[i][1]+a[i][1]*b[1][i]+

                res[i][j];
            }
        }
}
    else{
       cout<<"The matrix can not  be multiplies";

    }
}

