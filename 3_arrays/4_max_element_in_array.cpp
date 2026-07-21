//Finding the maximum element in a aarray
//array is given as {10,20,89,34,23,22,23,10,90}
#include<iostream>
using namespace std;
    int main(){
        int max,n;
        cout<<"Enter the no of elements in the array";
        cin>>n;
        int arr[n];
        for(int j=0;j<=n-1;j++){
            cin>>arr[j];
        }
        max=arr[0];
        for(int i=1;i<=n-1;i++){
           if(max<arr[i]){
            max=arr[i];
        }
    }
        cout<<"The maximum element of  the array is "<<max;
}