#include<iostream>
#include<vector>
using namespace std;
int combination(int n,int r)
{
    
}

int main()
{
    int n;
     cin >>n;
     for(int i=0; i<=n;i++)
     {
        for (int j =0 ;j<=i;j++)
        {
            cout<<combination(i,j);//icj
        }
        cout<<endl;
     }
}