#include <iostream>
using namespace std;

int main() {
    int number;
    cout << "Enter a positive integer: ";
    cin >> number;

    cout << "Divisors of " << number << ": ";
    for (int i = 1; i <= number; i++) {
        if (number % i == 0)
            cout << i << " ";
    }
    cout << endl;

    return 0;
}

