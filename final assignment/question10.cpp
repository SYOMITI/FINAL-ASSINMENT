#include <iostream>
using namespace std;

int main() {
    double accountBalance = 1000.0; // Assume initial balance
    double dailyLimit = 500.0; // Daily withdrawal limit
    double withdrawalAmount;

    cout << "Enter the amount you want to withdraw: ";
    cin >> withdrawalAmount;

    if (withdrawalAmount > accountBalance) {
        cout << "Insufficient funds." << endl;
    } else if (withdrawalAmount > dailyLimit) {
        cout << "Exceeds daily withdrawal limit." << endl;
    } else if (withdrawalAmount <= 0) {
        cout << "Invalid withdrawal amount." << endl;
    } else {
        accountBalance -= withdrawalAmount;
        cout << "Withdrawal successful. Remaining balance: $" << accountBalance << endl;
    }

    return 0;
}
