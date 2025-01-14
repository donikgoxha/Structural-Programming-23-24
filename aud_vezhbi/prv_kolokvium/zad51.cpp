//aud12 zad1
#include <iostream>
#include <cstring>

using namespace std;

int countF(char *txt, char search) {
    //so for
    int counter = 0;
    for (int i = 0; i < strlen(txt); i++) {
        if (txt[i] == search) {
            counter++;
        }
        return counter;
    }
}

int countR(char *txt, char search) {
    if (*txt == '\0') {
        return 0;
    } else {
        if (search == *txt) {
            return 1 + countR(txt + 1, *txt);
        }
    }
}

int countW(char *txt, char search) {
    int counter = 0;
    while (*txt != '\0') {
        if (*txt == search) {
            counter++;
        }
        txt++;
    }
    return counter;
}

int main() {
    char txt[101];
    char c;

    cin.getline(txt, 101);
    cin >> c;


    // cout << txt << endl << c;
    // cout << countF(txt, c);
    // cout << countW(txt, c);
    // cout << countR(txt, c);
    return 0;
}
