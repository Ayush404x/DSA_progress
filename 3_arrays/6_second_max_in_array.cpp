//Finding the maximum element in a aarray
//array is given as {10,20,89,34,23,22,23,10,90}
#include<iostream>
#include<climits>
using namespace std;
    int main(){
        int n;
        cout<<"Enter the no of elements in the array";
        cin>>n;
        int arr[n];
        for(int j=0;j<=n-1;j++){
            cin>>arr[j];
        }
        int max=INT_MIN;
        for(int i=1;i<=n-1;i++){
            if(max<arr[i]){
                max=arr[i];
            }
        }
        int s_max=INT_MIN;
        for(int i=1;i<=n-1;i++){
            if(arr[i]!=max && s_max<arr[i]){
                s_max = arr[i];
            }
        }
        cout<<"The maximum element of  the array is "<<max<<endl;
        cout<<"second maximum element is "<<s_max;
    }