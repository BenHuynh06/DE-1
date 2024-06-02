#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    int sum;
    cin >> n;

    vector<int> arr(n);

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cin >> sum;

    bool found = false;

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] + arr[j] == sum) {
                if (!found) {
                    cout << i << endl << j;
                }
                found = true;
                break;
            }
        }
    }

    if (!found) {
        cout << -1 << endl;
    }

    return 0;
}