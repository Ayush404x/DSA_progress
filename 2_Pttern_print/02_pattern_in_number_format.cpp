#include<iostream>
using namespace std;
int main(){
int r;
    cout<<"Enter the no of rows ";
    cin>>r;
    for (int i= 0;i<=r;i++){
        cout<<i<<" ";
        for(int j = 1 ; j<=r;j++){
        cout <<j;
        }
        cout <<endl;
    }
    return 0;
}