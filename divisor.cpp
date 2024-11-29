 #include <iostream>
using namespace std;

int main() {
    int n; 
   cout << "Enter a positive integer: ";
    cin >> n;
    if (n <= 0) {
        cout << "Please enter a positive integer." << endl;
    } else {
        cout << "The divisors of " << n << " are: ";
        for (int i = 1; i <= n; i++) {
            if (n % i == 0) {
                cout << i << " "; 
            }
        }
        cout << endl; 
    }
    return 0;
}

