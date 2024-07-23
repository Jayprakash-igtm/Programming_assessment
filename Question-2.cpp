/*Given a string, find the length of the longest substring
 without repeating characters. The function should return 
 an integer representing the length of the longest 
 substring without repeating characters*/

#include <iostream>
#include <unordered_map>

using namespace std;

int lengthOfLongestSubstring(string s) {
    int n = s.length();
    unordered_map<char, int> charMap ;   
    int maxLength = 0;
    int left = 0;

    for (int right = 0; right < n; ++right) {
        char currentChar = s[right];

        if (charMap.find(currentChar) != charMap.end() && charMap[currentChar] >= left) {
            left = charMap[currentChar] + 1;
        }

        charMap[currentChar] = right ;   
        maxLength = max(maxLength, right - left + 1);
        return maxLength;
}
}

int main() {
    string s = "abcabcbb";
    cout << "Length of the longest substring without repeating characters: ";
     cout << lengthOfLongestSubstring(s) << endl;
    return 0;
}   