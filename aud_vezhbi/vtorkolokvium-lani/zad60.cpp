#include <iostream>
#include<cstring>
#include<cctype>
using namespace std;

char firstUpperCaseletter(const char *str, int idx = 0) {
    if (str[idx] == '\0') {
        return '\0';
    }

    if (isupper(str[idx])) {
        return str[idx];
    }

    return firstUpperCaseletter(str, idx + 1);
}

int main() {
    char str[101];
    cin.getline(str, 101);

    char result = firstUpperCaseletter(str);

    if (result == '\0') {
        cout << "Nema";
    } else {
        cout << result << endl;
    }


    return 0;
}
