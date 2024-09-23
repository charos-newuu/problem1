#include <iostream>
using namespace std;

int main() {
    int winter, rain;
    cout << "Enter 1 if it is winter (0 otherwise): ";
    cin >> winter;
    cout << "Enter 1 if it is raining (0 otherwise): ";
    cin >> rain;
    if (winter == 1) {
        cout << "Output: Bus" << endl;
    } else {
        if (rain == 1) {
            cout << "Output: Walk" << endl;
        } else {
            cout << "Output: Bike" << endl;
        }
    }

    return 0;
}

