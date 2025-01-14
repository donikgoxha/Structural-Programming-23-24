//md eng
#include <iostream>
using namespace std;

int main() {
    int n;
    int array[100];
    cin >> n;
    double sum = 0;
    for (int i = 0; i < n; i++) {
        cin >> array[i];
        sum += array[i];
    }
    double avg = sum / n;
    cout << avg << endl;
    for (int i = 0; i < n; i++) {
        if (array[i] > avg) {
            cout << array[i] << " ";
        }
    }
    cout << endl;

    for (int i = 0; i < n; i++) {
        if (array[i] <= avg) {
            cout << array[i] << " ";
        }
    }
    cout << endl;


    return 0;
}