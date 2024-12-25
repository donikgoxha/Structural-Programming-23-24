//aud11 zad1
#include <iostream>
using namespace std;
//po referenca
void promena(int &n, int &m) {
    int temp = n;
    n = m;
    m = temp;
}

//so pokazhuvaci
// void promena(int *n, int *m) {
//     int temp = *n;
//     *n = *m;
//     *m = temp;
// }

int main() {
    int a = 5;
    int b = 10;
    cout << "Pred promena - " << "a: " << a << " b: " << b << endl;
    //so referenci
    promena(a, b);
    //so pokazhuvachi
    //promena(&a,&b);
    cout << "Posle promena - " << "a: " << a << " b: " << b << endl;
    return 0;
}
