#include<iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int maxSum = 0;
    int maxNumber = 0;

    for (int m = 1; m < n; m++) {
        int sum = 0;

        for (int i = 1; i * i <= m; i++) {
            if (m % i == 0) {
                sum += i;
                if (i != 1 && i != m / i && i * i != m) {
                    sum += m / i;
                }
            }
        }

        if (sum > maxSum) {
            maxSum = sum;
            maxNumber = m;
        }
    }

    cout << maxNumber << endl;
    return 0;
}
