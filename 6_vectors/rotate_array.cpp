#include<iostream>
#include<vector>
using namespace std;

int main(){
    int size;
    cout<<"Enter the size of the array to be stored : ";
    cin >> size;
    vector<int> v(size);
    cout<<"Enter the lements of the array : ";
    for(int i = 0; i < size; i++){
        cin >> v[i];
    }

    int k = 1;
    int j = 4;

    while(k < j){
        int temp = v[k];
        v[k] = v[j];
        v[j] = temp;
        k++;
        j--;
    }

    for(int i = 0; i < size; i++){
        cout << v[i] << " ";
    }

    return 0;
}