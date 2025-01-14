#include <iostream>
#include <cctype>
using namespace std;

void transform(char* txt) {
    for (int i = 0; txt[i] != '\0'; i++) {
        if (isalpha(txt[i])) {
            char a = tolower(txt[i]);
            if (a == 'a' || a == 'e' || a == 'i' || a == 'o' || a == 'u') {
                txt[i] = toupper(txt[i]);
            } else {
                txt[i] = tolower(txt[i]);
            }
        }
    }
}

int main() {
    char array[101];
    cin.getline(array, 101);
    transform(array);
    cout << array << endl;
    return 0;
}