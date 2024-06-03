#include <bits/stdc++.h>
using namespace std;

void handleStr(string a) {
    string resuit = "";
    for (int i = 0; i < a.size(); i++) {
        if (i % 2 == 0) {
            resuit += toupper(a[i]);
        }
        else {
            resuit += a[i];
        }
    }
    cout << resuit;
}

int main() {
    string str;
    getline(cin, str);
    handleStr(str);
    return 0;
}

