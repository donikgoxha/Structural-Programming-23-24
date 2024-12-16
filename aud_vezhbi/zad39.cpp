//aud10 rekurzija zad2
#include <iostream>
using namespace std;

void countDown(int n) {
    if (n == 4) {
        cout << "BOMB HAS BEEN DEFUSED!!!!!" << endl;
    } else {
        cout << n << endl;
        countDown(n - 1);
    }
}

int main() {
    countDown(10);
    return 0;
}
