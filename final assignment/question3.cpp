#include <iostream>
#include <string>
using namespace std;

int main() {
    string fullName, course;
    int score;

    cout << "Enter student full name: ";
    cin.ignore();
    getline(cin, fullName);
    cout << "Enter course name: ";
    getline(cin, course);
    cout << "Enter score: ";
    cin >> score;

    switch (score / 10) {
        case 10:
        case 9:
        case 8:
        case 7:
            cout << "Grade: A" << endl;
            break;
        case 6:
            cout << "Grade: B" << endl;
            break;
        case 5:
            cout << "Grade: C" << endl;
            break;
        case 4:
            cout << "Grade: D" << endl;
            break;
        default:
            if (score >= 0) {
                cout << "Grade: F" << endl;
            } else {
                cout << "Invalid score" << endl;
            }
    }

    return 0;
}
