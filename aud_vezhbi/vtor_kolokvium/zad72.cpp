#include <iostream>
using namespace std;

int main() {
    int array[100];
    int size;
    bool asc = true, desc = true;
    cin >> size;
    for (int i = 0; i < size; i++) {
        cin >> array[i];
    }

    for (int i = 1; i < size; i++) {
        if (array[i] > array[i - 1]) {
            desc = false;
        } else if (array[i] < array[i - 1]) {
            asc = false;
        } else {
            asc = desc = false;
        }
        //cout << array[i - 1] << " " << array[i] << " " << asc << " " << desc << endl;
    }

    if (asc) {
        cout << "ASCENDING" << endl;
    } else if (desc) {
        cout << "DESCENDING" << endl;
    } else {
        cout << "NEITHER" << endl;
    }


    return 0;
}
