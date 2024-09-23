#include <iostream>
using namespace std;

int main() {
    char gender;
    double height;
    cout << "Enter gender (M/F): ";
    cin >> gender;
    cout << "Enter height in meters: ";
    cin >> height;
    if (gender == 'M' || gender == 'm') {
        if (height < 1.70) {
            cout << "Output: Short" << endl;
        } else if (height >= 1.70 && height < 1.85) {
            cout << "Output: Normal" << endl;
        } else {
            cout << "Output: Tall" << endl;
        }
    } else if (gender == 'F' || gender == 'f') {
        if (height < 1.60) {
            cout << "Output: Short" << endl;
        } else if (height >= 1.60 && height < 1.75) {
            cout << "Output: Normal" << endl;
        } else {
            cout << "Output: Tall" << endl;
        }
    } else {
        cout << "Invalid gender input!" << endl;
    }

    return 0;
}

