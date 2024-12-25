//aud12 zad5
#include <iostream>
#include <cstring>
using namespace std;

bool palindormeStr(char *txt, int left, int right) {
    if (left >= right) {
        return true;
    }
    if (tolower(txt[left] != txt[right])) {
        return false;
    } else {
        return palindormeStr(txt, left + 1, right - 1);
    }
}

int main() {
    char txt1[101];
    cin.getline(txt1, 101);

    cout << palindormeStr(txt1, 0, strlen(txt1) - 1);
    return 0;
}
