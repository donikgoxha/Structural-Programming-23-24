//aud13(kolokviumski-vs) zad1
#include <iostream>
#include <iomanip>
#include <cstring>
using namespace std;

int pojavuvanja(char osnoven[], char recenica[]) {
    int brojach = 0;
    for (int i = 0; i <= (strlen(recenica) - strlen(osnoven)); i++) {
        if (osnoven[0] == recenica[i]) {
            bool flag = 1;
            for (int j = 0; j < strlen(osnoven); j++) {
                if (osnoven[j] != recenica[i + j]) {
                    flag = 0;
                    break;
                }
            }
            if (flag) {
                brojach++;
            }
        }
    }
    return brojach;
}

int main() {
    char osnoven[20], recenica[100];
    int n, spisok[100] = {0}, max = 0;

    cin.getline(osnoven, 20);
    cin >> n;
    cin.ignore();
    for (int i = 0; i < n; i++) {
        cin.getline(recenica, 100);
        int br_pojavuvanja = pojavuvanja(osnoven, recenica);
        spisok[br_pojavuvanja]++;
        if (br_pojavuvanja > max) {
            max = br_pojavuvanja;
        }
    }

    for (int i = 0; i <= max; i++) {
        cout << i << ": " << spisok[i] << endl;
    }
}
