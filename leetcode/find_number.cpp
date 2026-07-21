// Input: nums = [12,345,2,6,7896]
// Output: 2
// Explanation:
// 12 contains 2 digits (even number of digits).
// 345 contains 3 digits (odd number of digits).
// 2 contains 1 digit (odd number of digits).
// 6 contains 1 digit (odd number of digits).
// 7896 contains 4 digits (even number of digits).
// Therefore only 12 and 7896 contain an even number of digits.
// Example 2:

// Input: nums = [555,901,482,1771]
// Output: 1
// Explanation:
// Only 1771 contains an even number of digits.
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> nums;
    int item;
    int n, size;
    cout << "enter the no elemts to be entereed";
    cin >> size;
    cout << "enter the elemets of the array  ";
    for (int i = 0; i < size; i++)
    {
        cin >> n;
        nums.push_back(n);
    }
    int count_even = 0;
    for (int i = 0; nums.size(); i++)
    {
        item = nums[i];
        int count = 0;

        while (item > 0)
        {
            item = item / 10;
            count++;
        }
        if (count % 2 == 0)
        {
            count_even++;
        }
    }
    cout << count_even;
}