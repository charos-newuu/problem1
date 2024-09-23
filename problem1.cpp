#include <iostream>
using namespace std;

#include <iostream>
using namespace std;

int main() {
    long long int number;
    cin >> number;
    if (number >= -2147483647 - 1 && number <= 2147483647) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    return 0;
}

