//aud12 zad3
#include <iostream>
#include <cstring>

using namespace std;


int main() {
    char text[101];
    cin.getline(text, 101);

    int start, length;
    cin >> start >> length;

    //cout << text << endl << start << endl << length;
    //cout << (text + start) << endl;

    char result[100];
    strncpy(result, text + start, length);
    cout << result << endl;

    return 0;
}
