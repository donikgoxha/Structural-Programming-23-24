#include <iostream>
using namespace std;

void processArray(int *arr, int n, int &max, int &min, int &sum) {
    max = arr[0];
    min = arr[0];
    sum = 0;

    for (int i = 0; i < n; i++) {
        if (*(arr + i) > max) max = *(arr + i);
        if (*(arr + i) < min) min = *(arr + i);
        sum += *(arr + i);
    }

    int diff = max - min;

    for (int i = 0; i < n; i++) {
        *(arr + i) += diff;
    }
}

int main() {
    int n;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++) {
        cin >> *(arr + i);
    }

    int max, min, sum;
    processArray(arr, n, max, min, sum);

    cout << "MAX -> " << max << endl;
    cout << "MIN -> " << min << endl;
    cout << "SUM -> " << sum << endl;

    for (int i = 0; i < n; i++) {
        cout << *(arr + i) << " ";
    }
    cout << endl;

    return 0;
}
