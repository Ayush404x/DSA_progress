#include <iostream>
using namespace std;
int square(int n)
{
    for (int i = 0; i <= n; i++)
        cout << i * i;
}
int main()
{
    int n;
    cin >> n;

    int sum = square(n);
    cout << sum;
}
