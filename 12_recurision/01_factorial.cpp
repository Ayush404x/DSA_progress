// #include<iostream>
// using namespace std;
// void fact_upto(int n){
//     int f = 1;
//     for(int j=1;j<n;j++)
//     {
//     for(int i =1;i<j;i++)
//     {
//         f*=i;

//     }
//     cout<<f<<endl;
//     }
// }
// // int fact(int n)
// // {
// //     int f = 1;
// //     for(int i =2;i<n;i++)
// //     {
// //         f*=i;

// //     }
// //     return f;
// // }
// int main()
// {
//     fact_upto(5);
// }

//better approach


#include<iostream>
using namespace std;
void fact_upto(int n){
    int f = 1;
    for(int i =1;i<n;i++)
    {
        f*=i;
        cout<<f<<endl;
    }
}
int main()
{
    fact_upto(5);
}