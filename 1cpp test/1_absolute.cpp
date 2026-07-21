// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
    int sp,cp,loss,profit;
    cout<<"Enter the cost price "<<endl;
    cin>>cp;
    cout<<"Enter the selling price"<<endl;
    cin>>sp;
    if (cp>sp){
        loss = cp - sp;
        cout<<"loss :$"<<loss<<endl;
    }
    else if(sp>cp) 
    {
        profit = sp - cp;
        cout<<"profit :$"<<profit<<endl;
    }
    else
    {
        cp = sp;
        cout<<"breakeven";
    }

    return 0;
}