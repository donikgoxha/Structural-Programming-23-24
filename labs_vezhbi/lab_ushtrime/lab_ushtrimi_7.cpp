#include <iostream>
using namespace std;

int main() {
    int numItems;
    cin >> numItems;

    double price, totalCost = 0.0, totalSavings = 0.0;
    char discountType;

    for (int i = 0; i < numItems; ++i) {
        cin >> price >> discountType;

        double discount = 0.0;

        switch (discountType) {
            case 'A':
                discount = 0.20;
                break;
            case 'B':
                discount = 0.50;
                break;
            case 'C':
                discount = 0.70;
                break;
            case 'D':
                discount = 0.0;
                break;
            default:
                cout << "Invalid discount type." << endl;
                return 1;
        }

        double discountedPrice = price * (1 - discount);
        double savings = price * discount;

        totalCost += discountedPrice;
        totalSavings += savings;
    }

    cout << totalCost << endl;
    cout << totalSavings << endl;

    return 0;
}
