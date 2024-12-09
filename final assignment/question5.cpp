#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int choice;
    double area;

    cout << "Menu:\n1. Area of Circle\n2. Area of Rectangle\n3. Area of Triangle\n4. Quit\nEnter choice: ";
    cin >> choice;

    switch (choice) {
        case 1: {
            double radius;
            cout << "Enter radius: ";
            cin >> radius;
            area = M_PI * radius * radius;
            cout << "Area of Circle: " << area << endl;
            break;
        }
        case 2: {
            double length, width;
            cout << "Enter length and width: ";
            cin >> length >> width;
            area = length * width;
            cout << "Area of Rectangle: " << area << endl;
            break;
        }
        case 3: {
            double base, height;
            cout << "Enter base and height: ";
            cin >> base >> height;
            area = 0.5 * base * height;
            cout << "Area of Triangle: " << area << endl;
            break;
        }
        case 4:
            cout << "Exiting program." << endl;
            break;
        default:
            cout << "Invalid choice." << endl;
    }

    return 0;
}
