// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
    int n,m ;
    cout<<"Enter the no of rows";
    cin>>n;
    cout<<"no of stars in each column";
    cin>>m;
    for(int i=1;i<=n;i++){
        for (int j=1;j<=m;j++){

            cout<<"*";
        }
        cout<<endl;
    }
    return 0;

}