#include<iostream>
#include<vector>
using namespace std ;
int main(){
    vector<int>v;
    v.push_back(3);//size:1,cap:2
    v.push_back(1);//size:2,cap:2
    v.push_back(9);//size:3,cap:4
    v.push_back(10);//size:4,cap4
    v.push_back(3);//s:5,c:cap8
    v.push_back(1);
    v.push_back(9);
    v.push_back(10);
    v.push_back(3);
    v.push_back(1);
    v.push_back(9);
    v.push_back(10);
    v.push_back(3);
    v.push_back(1);
    v.push_back(9);
    v.push_back(10);
    v.push_back(3);
    v.push_back(1);
    v.push_back(9);
    v.push_back(10);
    v.push_back(3);
    v.push_back(1);
    v.push_back(9);
    v.push_back(10);
    cout<<"size is : "<<v.size()<<endl;
    cout<<"capacity is :"<<v.capacity();
}