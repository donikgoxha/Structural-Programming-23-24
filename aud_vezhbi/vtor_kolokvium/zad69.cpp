#include <iostream>
using namespace std;

int main() {
    int array[100];

    int size;
    cin >> size;

    int sum = 0;


    for (int i = 0; i < size; i++) {
        cin >> array[i];
        sum += array[i];
    }

    double average = 1.0 * sum / size;

    cout << average << endl;

    for (int i = 0; i < size; i++) {
        cout << array[i] << " -> " << abs(array[i] - average) << endl;
    }

    return 0;
}
