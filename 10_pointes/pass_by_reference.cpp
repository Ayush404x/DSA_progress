// //pass by value
// #include<iostream>
// using namespace std;
// void swap(int a ,int b)
// {
//     int temp = a;
//     a = b;
//     b = temp;
//     b = temp;
//     return;
// }
// int main()
// {
//     int a,b;
//     a=8;
//     b=9;
//     swap(a,b);
//     cout<<a<<" "<<b;

// }
//pass by referece
#include<iostream>
using namespace std;
void swap(int *x ,int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
    return;
}
int main()
{
    int a,b;
    cin>>a>>b;
    swap(&a,&b);
    cout<<a<<" "<<b;
} 