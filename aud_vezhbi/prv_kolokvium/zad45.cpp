//aud10 rekurzija zad10
#include <iostream>
using namespace std;

int max_element(int a[], int n) {
    if (n == 0) {
        return a[0];
    }
    int max = max_element(a, n - 1);
    if (a[n] > max) {
        return a[n];
    }
    return max;
}

int main() {
    int a[100];
    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    cout << max_element(a, n - 1) << endl;


    return 0;
}
