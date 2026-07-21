#include <iostream>
using namespace std;

int main() {
	int n;
    int arr[n];
    cout<<"enter the elements to be entered";
    for(int i =0 ; i<=n-1;i++){
        cin>>arr[i];
    }
    int x;
    cout<<"enter the elemt to be serarched";
    cin>>n;
    bool flag = false;
    for (int i = 0; i<+n-1; i++){
        if (flag=true)
        {
            cout<<"element found ";
        }
        else{
            cout<<"not found";
        }
    }
	return 0;
}