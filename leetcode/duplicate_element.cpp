#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n ;
    bool flag = false;
    vector<int>v;
    cout<<"Enter the no of element of the array";
    cin>>n;
    cout<<"Enter the elemets of the array";
    for(int i =0 ; i<n;i++)
    {
        int q;
        cin>>q;
        v.push_back(q);

    }
    for(int i =0;i<v.size()-1;i++){
        for(int j=0;j<v.size();i++){
            if(v[i]==v[j]){
                cout<<v[i];
                flag=true;
                break;
            }
        }
    if(flag==true){
        break;
        }
    }
}