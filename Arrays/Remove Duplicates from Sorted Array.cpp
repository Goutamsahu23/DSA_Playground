#include<iostream>
using namespace std;
#include<vector>

int removeDuplicates(vector<int>& nums) {
        int i=0;
        for(int j=1;j<nums.size();j++){
            if(nums[j] != nums[i]){
                i++;
                nums[i]=nums[j];
            }
        }
        return i+1;
    }

int main(){
    int n;
    cout<<"Enter the number of elements in the array:";
    cin>>n;
    vector<int> nums(n);
    cout<<"Enter the elements of the array:"<<endl;
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    int k = removeDuplicates(nums); 
    cout<<"Unique elements in the arry is: "<<k<<endl;
    cout<<"The array after removing duplicates is: ";
    for(int i=0;i<k;i++){
        cout<<nums[i]<<" ";
    }
    cout<<endl;
    return 0;
}