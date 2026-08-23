#include<iostream>
using namespace std;
int main()
{
    // int x =10;
    // int *p = &x;
    // cout<<*p; 
    // // cout<<endl;
    // int x =9;
    // // int *ptr = (int *)x;
    // // cout<<*(ptr);
    // int *p = &x;
    // cout << p;
    // cout << *p;


    //int arr[] = {1,2,3};

   int arr[2][3] = {{1,2,3},  ///0th row
                    {4,5,6}};    // 1st row
    
    //int (*ptr)[3]= arr;

    //cout << &arr <<endl;
    // cout << arr;

    int (*ptr)[3] = *&arr+1;
    cout << **ptr;
    // int (*ptr)[3] = arr + 1;
    // cout << **ptr;


}           