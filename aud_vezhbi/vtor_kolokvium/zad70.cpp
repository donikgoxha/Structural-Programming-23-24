#include <iostream>
using namespace std;

int main() {
    int array1[100], array2[100];
    int size1, size2;

    cin >> size1;
    for (int i = 0; i < size1; i++) {
        cin >> array1[i];
    }

    cin >> size2;
    for (int i = 0; i < size2; i++) {
        cin >> array2[i];
    }

    if (size1 != size2) {
        cout << "NO - different size";
        return 0;
    }

    for (int i = 0; i < size1; i++) {
        if (array1[i] != array2[i]) {
            cout << "NO - the elements are not same";
            return 0;
        }
    }

    cout << "YES - they are equal";


    // for (int i = 0; i < size1; i++) {
    //     cout << array1[i] << " ";
    // }
    // cout << endl;
    // for (int i = 0; i < size2; i++) {
    //     cout << array2[i] << " ";
    // }

    return 0;
}
