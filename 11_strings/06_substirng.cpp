#include<iostream>
#include<string>
using namespace std;

int main()
{ 

    string str;
    cout<<"Enter the string";
    cin>>str;
    int n = str.length();
    cout<<str.substr(n/2);
}