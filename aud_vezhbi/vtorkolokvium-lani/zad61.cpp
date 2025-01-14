#include <iostream>
#include<cstring>
#include<cctype>
using namespace std;

char firstPunctationMark(const char *str, int idx = 0) {
    if (str[idx] == '\0') {
        return '\0';
    }

    if (ispunct(str[idx])) {
        return str[idx];
    }

    return firstPunctationMark(str, idx + 1);
}

int main() {
    char str[101];
    cin.getline(str, 101);

    char result = firstPunctationMark(str);

    if (result == '\0') {
        cout << "Nema";
    } else {
        cout << result << endl;
    }


    return 0;
}
