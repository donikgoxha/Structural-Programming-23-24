// Од тастатура се вчитува текстуална низа дадена во еден ред (низата може да има најмногу 300 знаци). По вчитување
// на низата, се вчитува еден знак c .
// На екран да се испечати поднизата која почнува од првото појавување на знакот c до последното појавување на знакот c.
// Да се игнорира големината на буквите.
// --
// Write a program that reads a textual string from the keyboard, read from a single line (the string can have up
// to 300 characters). After reading the string, a character 'c' is read.
// The program then prints to the screen the substring that begins with the first occurrence of the character 'c' and
// ends with the last occurrence of the character 'c'.
// Ignore the case of the letters

// For example:
//Input
//Zdravo kako si?
//a
//Result
//avo ka

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
