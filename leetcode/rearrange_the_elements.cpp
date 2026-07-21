#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int size;
    cout << "Enter the size of the array to be stored : ";
    cin >> size;
    vector<int> nums(size);
    int n;
    cout << "enter the no elemts to be entereed";
    cin >> size;
    cout << "enter the elemets of the array  ";
    for (int i = 0; i < size; i++)
    {
        cin >> n;
        nums.push_back(n);
    }
    for (int i = 0; i < size - 1; i++)
    {

        for (int j = 0; i < size; j++)
        {
            if (nums[1] > 0)
            {
                cout << nums[j];
            }
            else
            {
                cout << nums[j];
            }
        }
    }
}