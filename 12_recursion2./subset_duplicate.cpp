#include<iostream>
#include<string>
#include<vector>
using namespace std;
void printsubset(string ans,string original, vector<string>&v,bool flag){
    if(original =="")
{
    //cout<<ans<<endl;
    v.push_back(ans);
    return;
}
char ch = original[0];
char dh = original[1];
printsubset(ans+ch,original.substr(1),v);
printsubset(ans,original.substr(1),v);
}
int main()
{
    string str = "aab";
    vector<string> v;
    printsubset("",str,v,true);
    for(int i = 0;i<v.size();i++){
        cout<<v[i]<<endl;
    }
}