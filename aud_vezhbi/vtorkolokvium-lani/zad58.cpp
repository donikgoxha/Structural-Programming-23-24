#include<iostream>
using namespace std;

void pechati(int n) {
    if (n <= 0) {
        cout << n << "";
        return;
    }
    cout << n << " ";
    pechati(n - 5);
    cout << " " << n;
}


int main() {
    int n;
    cin >> n;
    pechati(n);
}
