#include <iostream>
#include <vector>
using namespace std;

int removeElement(vector<int>& nums, int val) {
    int n = nums.size();
    int i = 0;

    while (i < n) {
        if (nums[i] == val) {
            nums[i] = nums[n - 1]; // replace with last element
            n--;                   // reduce size
        } else {
            i++; //skip the element
        }
    }
    return n; 
}

int main() {
    vector<int> nums = {3,2,2,3};
    int val = 3;

    int newLength = removeElement(nums, val);

    cout << "Length: " << newLength << endl;
    cout << "Array after removing element: ";
    for (int i = 0; i < newLength; i++) cout << nums[i] << " ";
    cout << endl;

    return 0;
}
