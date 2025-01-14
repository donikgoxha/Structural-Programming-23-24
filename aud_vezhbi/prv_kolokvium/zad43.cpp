//aud10 rekurzija zad7 i zad8
#include <iostream>
using namespace std;

int gcd(int m, int n) {
    if (n == 0) {
        return m;
    } else {
        return gcd(m, n % m);
    }
}

int lcm(int m, int n, int divisor) {
    if (m == 1 || n == 1) {
        return 1;
    } else {
        if (m % divisor != 0 && n % divisor != 0) {
            return lcm(m, n, divisor + 1);
        } else {
            if (m % divisor == 0) {
                m /= divisor;
            }
            if (n % divisor == 0) {
                n /= divisor;
            }
            return divisor * lcm(m, n, divisor);
        }
    }
}

int main() {
    int n;
    cin >> n;
    int a[100];

    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    int result = lcm(a[0], a[1], 2);

    for (int i = 2; i < n; ++i) {
        result = lcm(result, a[i], 2);
    }

    cout << result << endl;
    return 0;
}
