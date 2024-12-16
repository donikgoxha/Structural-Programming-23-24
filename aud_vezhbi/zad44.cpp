//aud10 rekurzija zad9
#include <iostream>
using namespace std;

int sumArray(int a[], int n) {
    if (n == 0) {
        return 0;
    } else {
        return a[n - 1] + sumArray(a, n - 1);
    }
}

int main() {
    int n;
    cin >> n;

    int a[100];

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    cout << sumArray(a, n) << endl;

    return 0;
}
