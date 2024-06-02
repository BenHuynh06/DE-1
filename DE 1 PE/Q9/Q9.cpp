#include <iostream>
#include <string>
#include <cctype>

using namespace std;

void capitalizeFirstLetters(string& str) {
    if (str.empty()) {
        return;
    }

    str[0] = toupper(str[0]);

    for (int i = 1; i < str.length(); i++) {
        if (str[i - 1] == ' ') {
            str[i] = toupper(str[i]);
        }
    }
}

int main() {
    string str;
    getline(cin, str);

    if (str.length() > 100) {
        cout << "Gioi han 100 ky tu" << endl;
        return 1;
    }

    capitalizeFirstLetters(str);
    cout << str << endl;

    return 0;
}
