// Given an integer array nums, return true if any value appears more than once in the array, otherwise return false.

// Example 1:

// Input: nums = [1, 2, 3, 3]

// Output: true

// Example 2:

// Input: nums = [1, 2, 3, 4]

// Output: false

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the number of elements in the array:";
    cin >> n;
    int nums[n];
    cout << "Enter the elements of the array:" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }
    bool containsDuplicate = false;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (nums[i] == nums[j])
            {
                containsDuplicate = true;
                break;
            }
        }
        if (containsDuplicate)
        {
            break;
        }
    }
    if (containsDuplicate)
    {
        cout << "true" << endl;
    }
    else
    {
        cout << "false" << endl;
    }
}