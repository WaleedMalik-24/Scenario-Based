#include <iostream>
using namespace std;

int main() {
  // Prompt the user to enter a positive integer n
  int n;
  cout << "Enter a positive integer: ";
  cin >> n;

  // Validate the input to ensure n is positive
  while (n <= 0) {
    cout << "Invalid input. Please enter a positive integer: ";
    cin >> n;
  }

  // Display a table with numbers, their squares, and cubes
  cout << "Number\tSquare\tCube" << endl;
  for (int i = 1; i <= n; i++) {
    cout << i << "\t" << i * i << "\t" << i * i * i << endl;
  }

  return 0;
}
