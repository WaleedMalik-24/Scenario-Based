#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter a positive integer: ";
    cin >> n;
    if (n <= 0) {
        cout << "Please enter a positive integer." << endl;
    } else {
        for (int i = n; i >= 1; --i) { // Outer loop for rows
        for (int j = i; j >= 1; --j) { // Inner loop for columns
            cout << j << " "; // Print the numbers in the row
            }
            cout << endl; // Move to the next line after each row
        }
    }
    return 0;
}

