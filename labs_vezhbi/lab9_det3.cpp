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
