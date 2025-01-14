//aud12 zad4
#include <iostream>
#include <cstring>
#include <cctype>
using namespace std;

void toLowerCase(char *str) {
    for (int i = 0; str[i] != '\0'; i++) {
        str[i] = (char) tolower(str[i]);
    }
}


int main() {
    char small[101];
    char large[201];

    cin.getline(small, 101);
    cin.getline(large, 201);

    toLowerCase(small);
    toLowerCase(large);

    if (strlen(small) > strlen(large)) {
        cout << "NO" << endl;
        return 0;
    }

    //easy way
    if (strstr(small, large) != nullptr) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    //hard way
    // for (int i = 0; i <= (strlen(large) - strlen(small)); i++) {
    //     if (tolower(large[i] == small[0])) {
    //         int counter = 0;
    //         for (int j = 0; j < strlen(small); j++) {
    //             if (tolower(small[j] == large[j + i])) {
    //                 ++counter;
    //             }
    //         }
    //         if (counter == strlen(small)) {
    //             cout << "YES" << endl;
    //             return 0;
    //         }
    //     }
    // }
    // cout << "NO" << endl;
    return 0;
}
