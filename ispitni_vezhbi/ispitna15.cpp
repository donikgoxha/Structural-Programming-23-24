#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    if (n <= 2) {
        cout << "Invalid input!" << endl;
    }
    cout << "%";
    for (int i = 1; i < n - 1; i++) {
        cout << "@";
    }
    cout << "%" << endl;

    for (int i = 0; i < n - 2; i++) {
        cout << "%";
        for (int j = 0; j < n - 2; j++) {
            cout << ".";
        }
        cout << "%" << endl;
    }

    cout << "%";
    for (int i = 1; i < n - 1; i++) {
        cout << "@";
    }
    cout << "%" << endl;
    return 0;
}
