#include <iostream>
#include <string>
using namespace std;

int main() {
    string bookType;
    int daysLate;
    double fine = 0;

    cout << "Enter book type (regular/children/reference): ";
    cin >> bookType;
    cout << "Enter number of days late: ";
    cin >> daysLate;

    if (daysLate > 0) {
        if (bookType == "regular") {
            fine = daysLate * 2.0;
        } else if (bookType == "children") {
            fine = daysLate * 1.0;
        } else if (bookType == "reference") {
            fine = daysLate * 5.0;
        } else {
            cout << "Invalid book type." << endl;
            return 0;
        }
        cout << "The late fee is: $" << fine << endl;
    } else {
        cout << "No late fee." << endl;
    }

    return 0;
}
