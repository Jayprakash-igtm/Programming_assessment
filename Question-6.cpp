/*Write a function to find the factorial of a 
given number.The function should return the 
factorial of the number*/

#include <iostream>
using namespace std;

int factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    }
    
    int result = 1;
    
    for (int i = 2; i <= n; ++i) {
        result *= i;
    }
    
    return result;
}

int main() {
    int n = 5;
    cout << "Factorial of " << n << " is: " << factorial(n) << endl;
    return 0;
}
