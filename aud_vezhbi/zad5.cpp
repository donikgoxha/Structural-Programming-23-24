#include <iostream>
using namespace std;

int main() {
    int number1, number2, number11, number22;

    cin >> number1 >> number2;

    //Vrednosta na broj1 i broj2 pred zamena na broevite e: 32,5 a razlikata: 27
    cout << "Vrednosta na broj1 i broj2 pred zamena na broevite e: " << number1 << "," << number2 << " a razlikata: " <<
            number1 - number2 << endl;

    number1 = number22;
    number2 = number11;

    //Vrednosta na broj1 i broj2 posle zamena na broevite e: 5,32 a razlikata: -27
    cout << "Vrednosta na broj1 i broj2 posle zamena na broevite e: " << number11 << "," << number22 <<
            " a razlikata: " <<
            number11 - number22 << endl;

    return 0;
}
