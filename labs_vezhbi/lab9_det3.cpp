//Напиши програма која ќе испечати колку зборови се палиндроми во дадена реченица (линија).
//Првен се вчитува бројот N, потоа се вчитуваат N линии.
//Напомена: искористи cin.ignore() после вчитување на N доколку користите cin.getline().
//Зборови од 1 буква се сметаат како палиндром, и проверката за палиндром да биде case-insensitive
//(Racecar е палиндром исто како и racecar)
//Не е дозволено користење на тип од string.
//For example:
//Input
//2
//Was it a car or a cat I saw
//Hello world
//Result
//Was it a car or a cat I saw: 3
//Hello world: 0

#include <iostream>
#include <cctype>
using namespace std;

bool isAPalindrome(char *start, int length) {
    if (length <= 1) {
        return true;
    }

    int left = 0;
    int right = length - 1;

    while (left < right) {
        if (tolower(start[left]) != tolower(start[right])) {
            return false;
        }
        left++;
        right--;
    }
    return true;
}

int countPalindromes(char *line) {
    int counter = 0;
    int length = 0;
    int start = 0;

    for (int i = 0; line[i] != '\0'; i++) {
        if (line[i] == ' ' || line[i + 1] == '\0') {
            if (line[i] == ' ') {
                length = i - start;
            } else {
                length = i - start + 1;
            }
            if (length > 0 && isAPalindrome(line + start, length)) {
                counter++;
            }
            start = i + 1;
        }
    }
    return counter;
}

int main() {
    int N;
    cin >> N;
    cin.ignore();

    char line[1000];
    for (int i = 0; i < N; i++) {
        cin.getline(line, 1000);
        cout << line << ": " << countPalindromes(line) << endl;
    }

    return 0;
}
