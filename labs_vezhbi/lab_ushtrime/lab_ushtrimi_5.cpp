//
// Created by Donik Goxha on 30-Oct-24.
//
#include<iostream>
using namespace std;

int main() {
    int category;
    int price;
    int age;
    cin >> category >> age;
    switch (category) {
        case 1:
            if (category == 1) {
                cout << "Price: 8$";
            }
            break;
        case 2:
            if ((category == 2 && age < 12)) {
                cout << "Price: 8$";
            } else if (category == 2 && age <= 12) {
                cout << "Price: 12$";
            }
            break;
        case 3:
            if (category == 3 && age < 12) {
                cout << "Price: 10$";
            } else if (category == 3 && age >= 12) {
                cout << "Price: 15$";
            }
            break;
        case 4:
            if (category == 4 && age < 17) {
                cout << "Price: 15$";
            } else if (category == 4 && age >= 17) {
                cout << "Price: 18$";
            }
            break;
    }
    return 0;
}
