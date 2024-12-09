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

    if (score >= 70) {
        cout << "Grade: A" << endl;
    } else if (score >= 60) {
        cout << "Grade: B" << endl;
    } else if (score >= 50) {
        cout << "Grade: C" << endl;
    } else if (score >= 40) {
        cout << "Grade: D" << endl;
    } else if (score >= 0) {
        cout << "Grade: F" << endl;
    } else {
        cout << "Invalid score" << endl;
    }

    return 0;
}
