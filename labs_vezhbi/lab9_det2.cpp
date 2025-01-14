#include <iostream>
#include <cctype>
using namespace std;

int main() {
    char str[301];
    char c;

    cin.getline(str, 301);
    cin >> c;

    int first = -1;
    int last = -1;
    for (int i = 0; str[i] != '\0'; i++) {
        if (tolower(str[i]) == tolower(c)) {
            if (first == -1) {
                first = i;
            }
            last = i;
        }
    }

    if (first != -1) {
        for (int i = first; i <= last; i++) {
            cout << str[i];
        }
    }
    return 0;
}
