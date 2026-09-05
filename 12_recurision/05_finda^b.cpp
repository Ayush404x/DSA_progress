#include<iostream>
using namespace std;
int pow(int a , int b)
{
    int p =1;
    for(int i =0;i<b;i++)
    {
        p *= a;
    }
    return p;
}
int powrec(int a , int b)
{
    if( b==0) return 1;
    return a*powrec(a,b-1);
}
int main()
{
    int a;
    int b;
    cout<<"enter base";
    cin>>a;
    cout<<"enter the exp";
    cin>>b;
    cout<<"raised to the  "<<b<<" is "<<powrec(a,b);
}

 

