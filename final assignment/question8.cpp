#include <iostream>
using namespace std;

int main() {
    double purchaseAmount, discount = 0;

    cout << "Enter the purchase amount: ";
    cin >> purchaseAmount;

    if (purchaseAmount > 1000) {
        discount = 0.20; // 20% discount
    } else if (purchaseAmount > 500) {
        discount = 0.10; // 10% discount
    } else if (purchaseAmount > 100) {
        discount = 0.05; // 5% discount
    } else {
        discount = 0; // No discount
    }

    double totalCost = purchaseAmount - (purchaseAmount * discount);
    cout << "Total cost after discount: $" << totalCost << endl;

    return 0;
}
