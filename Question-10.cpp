/*Write a function to check if a given string contains 
only alphabetic characters.The function should return 
true if the string contains only alphabetic characters, 
and false otherwise*/

#include <iostream>
#include <string>
#include <cctype>

using namespace std;

bool isAlphabetic(const string& str) {
    for (char c : str) {
        if (!isalpha(c)) {
            return false; 
        }
    }
    return true; 
}

int main() {
    string str1 = "HelloWorld";
    string str2 = "Hello World123";

    cout << boolalpha;
    cout << "String \"" << str1 << "\" contains only alphabetic characters: " << isAlphabetic(str1) << endl;
    cout << "String \"" << str2 << "\" contains only alphabetic characters: " << isAlphabetic(str2) << endl;

    return 0;
}
