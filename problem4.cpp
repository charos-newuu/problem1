#include <iostream>
#include <set>
using namespace std;

int main() {
    int n1, n2, n3, n4;
    cout << "Enter four integers: ";
    cin >> n1 >> n2 >> n3 >> n4;
    set<int> unique_numbers = {n1, n2, n3, n4};
    int modifications = 4 - unique_numbers.size();
    cout << "Output: " << modifications << endl;

    return 0;
}
