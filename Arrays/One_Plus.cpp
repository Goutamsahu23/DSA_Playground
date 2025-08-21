#include <iostream>
#include <vector>
using namespace std;

vector<int> plusOne(vector<int>& digits) {
    int n = digits.size();
    
    // Traverse from last digit
    for (int i = n - 1; i >= 0; i--) {
        if (digits[i] < 9) {
            digits[i]++;   // simple case, no carry
            return digits; // done
        }
        digits[i] = 0; // if digit = 9, becomes 0 and carry continues
    }
    
    //  all were 9 (e.g. 999 -> 1000)
    digits.insert(digits.begin(), 1);
    return digits;
}

int main() {
    cout << "Enter the size of digits array: ";
    int n;
    cin >> n;
    vector<int> digits(n);
    for (int i = 0; i < n; i++) {
        cout << "Digit " << i + 1 << ": ";
        cin >> digits[i];
    }


    vector<int> result = plusOne(digits);
    
    cout << "Result: ";
    for (int d : result) cout << d << " ";
    cout << endl;
    
    return 0;
}
