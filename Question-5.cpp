/*Write a function to rotate an array to the right by 
k steps.The function should modify the array in place 
to achieve the rotation*/

#include <iostream>
#include <vector>
#include<algorithm>

using namespace std;

void rotate(vector<int>& nums, int k) {
    int n = nums.size();
    k = k % n;
    
    reverse(nums.begin(), nums.end());
    
    reverse(nums.begin(), nums.begin() + k);
    
    reverse(nums.begin() + k, nums.end());
}

void printArray(const vector<int>& nums) {
    for (int num : nums) {
        cout << num << " ";
    }
    cout << endl;
}

int main() {
    vector<int> nums = {1, 2, 3, 4, 5, 6, 7};
    int k = 3;

    cout << "Original array: ";
    printArray(nums);

    rotate(nums, k);

    cout << "Array rotated to the right by " << k << " steps: ";
    printArray(nums);

    return 0;
}