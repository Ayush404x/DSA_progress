#include <iostream>
using namespace std;
int reverse_num(int n)
{
    int rev = 0;
    while (n != 0)
    {
        int digit = n % 10;
        rev = rev * 10 + digit;
        n = n / 10;
    }
    return rev;
}
int main()
{
    int n;
    cout << "enter the number : ";
    cin >> n;
    cout<<reverse_num(n);
}