#include <iostream>
using namespace std;

int main() {
    int timer;

    cout << "Enter the timer (1 for Red, 2 for Yellow, 3 for Green): ";
    cin >> timer;

    switch (timer) {
        case 1:
            cout << "Traffic Light is RED. Stop!" << endl;
            break;
        case 2:
            cout << "Traffic Light is YELLOW. Get Ready!" << endl;
            break;
        case 3:
            cout << "Traffic Light is GREEN. Go!" << endl;
            break;
        default:
            cout << "Invalid input. Please enter 1, 2, or 3." << endl;
    }

    return 0;
}
