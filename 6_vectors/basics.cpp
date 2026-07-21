// #include<iostream>
// #include<vector>
// using namespace std ;
// int main(){
//     vector<int>v;
//     v.push_back(7);
//     cout<<v.size()<<endl;
//     v.push_back(3);
//     cout<<v.size()<<endl;
//     v.push_back(8);
//     // cout<<v[0]<<"";
//     // cout<<v[0]<<"";
//     // cout<<v[0]<<"";
//     // cout<<v[0]<<"";
    
// }
#include<iostream>
#include<vector>
using namespace std ;
int main(){
    vector<int>v;
    v.push_back(7);
    cout<<v.capacity()<<endl;
    v.push_back(3);
    cout<<v.capacity()<<endl;
    v.push_back(8);
    // cout<<v[0]<<"";
    // cout<<v[0]<<"";
    // cout<<v[0]<<"";
    // cout<<v[0]<<"";
    
}