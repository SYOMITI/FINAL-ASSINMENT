#include <iostream>
#include <string>
using namespace std;

int main() {
    int age;
    string movieType;
    double ticketPrice;

    cout << "Enter the customer's age: ";
    cin >> age;
    cout << "Enter movie type (regular/3D): ";
    cin >> movieType;

    if (movieType == "regular") {
        if (age < 12) {
            ticketPrice = 5.0; // Child price
        } else if (age >= 60) {
            ticketPrice = 6.0; // Senior citizen price
        } else {
            ticketPrice = 10.0; // Adult price
        }
    } else if (movieType == "3D") {
        if (age < 12) {
            ticketPrice = 7.0; // Child price
        } else if (age >= 60) {
            ticketPrice = 8.0; // Senior citizen price
        } else {
            ticketPrice = 12.0; // Adult price
        }
    } else {
        cout << "Invalid movie type." << endl;
        return 0;
    }

    cout << "The ticket price is: $" << ticketPrice << endl;

    return 0;
}
