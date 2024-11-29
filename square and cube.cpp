#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int n;
    cout << "Enter a positive integer: ";
    cin >> n;

    cout << setw(10) << "Number" << setw(10) << "Square" << setw(10) << "Cube" << endl;
    for (int i = 1; i <= n; i++) {
        cout << setw(10) << i << setw(10) << i * i << setw(10) << i * i * i << endl;
    }

    return 0;
}
