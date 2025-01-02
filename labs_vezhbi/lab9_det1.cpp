// Од стандарден влез да се прочита една низа од знаци со најмногу 100 карактери.
// Да се трансформира низата така што ќе ги претворите самогласките во големи букви,
// а согласките во мали букви.
// Вашата програма треба да дефинира функција void transform (char* text) .
// Користете ја библиотеката <cctype>
// --
// From the standard input, read a sequence of characters with a maximum of 100 characters.
// Transform the sequence such that vowels are converted to uppercase letters,
// and consonants are converted to lowercase letters.
// Your program should define the function: void transform(char* text);
// Use the <cctype> library.
//
// For example:
// Input
// ABCDEFGHIJKLMNOPQRSTUVWXYZ
// Result
// AbcdEfghIjklmnOpqrstUvwxyz

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