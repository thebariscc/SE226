#include <iostream>

using namespace std;

// Recursive function to compute sum of natural numbers up to n
int recursiveSum(int n) {
    if (n == 0) return 0;
    return n + recursiveSum(n - 1);
}

// Overloaded function without parameters
int recursiveSum() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    return recursiveSum(n);
}

int main() {
    int n;
    
    // Solution for question 4
    cout << "Enter a number for recursive sum calculation: ";
    cin >> n;
    cout << "Sum using recursion: " << recursiveSum(n) << endl;

    // Solution for question 5 (Overloaded function)
    cout << "Sum using overloaded function: " << recursiveSum() << endl;

    return 0;
}