#include <iostream>
#include <string>
using namespace std;

bool loanCalculator(int age, double bankBalance, string crbStatus, int customerMonths) {
    return (age > 22 && bankBalance > 50000 && crbStatus == "good" && customerMonths > 6);
}

int main() {
    int age, customerMonths;
    double bankBalance;
    string crbStatus;

    cout << "Enter customer age: ";
    cin >> age;
    cout << "Enter bank balance: ";
    cin >> bankBalance;
    cout << "Enter CRB status (good/bad): ";
    cin >> crbStatus;
    cout << "Enter number of months as a customer: ";
    cin >> customerMonths;

    if (loanCalculator(age, bankBalance, crbStatus, customerMonths)) {
        cout << "Customer is qualified for the loan." << endl;
    } else {
        cout << "Customer does not qualify for the loan." << endl;
    }

    return 0;
}
