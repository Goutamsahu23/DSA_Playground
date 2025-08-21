#include <iostream>
#include <vector>
#include <string>

using namespace std;

string longestCommonPrefix(vector<string>& strs) {
        string prefix=strs[0];
        for(int i=1;i<strs.size();i++){
            while(strs[i].find(prefix) != 0){
                prefix=prefix.substr(0,prefix.size()-1);
                if(prefix.empty()){
                    return "";
                }
            }
            
        }
        return prefix;
    }

int main() {
    // vector<string> strs = {"flower", "flow", "flight"};
    int n;
    cout << "Enter number of strings: ";
    cin >> n;
    vector<string> strs(n);
    cout << "Enter the strings:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> strs[i];
    }
    
    cout << "Longest Common Prefix: " << longestCommonPrefix(strs) << endl;
    return 0;
}