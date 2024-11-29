#include <iostream>
#include <string>
using namespace std;

int main() {
    string password = "1234", input;
    int attempts = 3;

    for (int i = 0; i < attempts; i++) {
        cout << "Enter password: ";
        cin >> input;

        if (input == password) {
            cout << "Access granted.\n";
            return 0;
        } else {
            cout << "Incorrect password. " << (attempts - i - 1) << " attempts remaining.\n";
        }
    }

    cout << "Access denied.\n";
    return 0;
}
