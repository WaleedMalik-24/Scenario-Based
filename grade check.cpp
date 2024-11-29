#include <iostream>
using namespace std;

int main() {
    int marks;
    char choice;

    do {
        cout << "Enter marks (0-100): ";
        cin >> marks;

        if (marks >= 90 && marks <= 100)
            cout << "Grade: A\n";
        else if (marks >= 80)
            cout << "Grade: B\n";
        else if (marks >= 70)
            cout << "Grade: C\n";
        else if (marks >= 60)
            cout << "Grade: D\n";
        else if (marks >= 0)
            cout << "Grade: F\n";
        else
            cout << "Invalid marks. Please enter a value between 0-100.\n";

        cout << "Do you want to calculate another grade? (y/n): ";
        cin >> choice;
    } while (choice == 'y' || choice == 'Y');

    return 0;
}
