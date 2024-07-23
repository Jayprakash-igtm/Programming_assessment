/*Write a function to find the maximum difference 
between any two elements in an array. The function 
should return the maximum difference between any 
two elements in the array*/

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int maxDifference(const vector<int>& nums) {
    if (nums.size() < 2) {
        return 0;
    }

    int minVal = *min_element(nums.begin(), nums.end()); 
    int maxVal = *max_element(nums.begin(), nums.end()); 

    return maxVal - minVal; 
}

int main() {
    vector<int> nums = {7, 1, 5, 3, 6, 4};

    cout << "Maximum difference between any two elements: " << maxDifference(nums) << endl;

    return 0;
}
