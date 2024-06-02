#include <iostream>
#include <cmath>

using namespace std;

bool isPerfectNumber(int n) {
    if (n <= 1) {
        return false;
    }

    int sumOfDivisors = 1;

    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) {
            sumOfDivisors += (i == n / i) ? i : (i + n / i);
        }
    }

    return sumOfDivisors == n;
}

int main() {
    int n;

    cin >> n;

    if (isPerfectNumber(n)) {
        cout << n << " is a perfect number" << endl;
    }
    else {
        cout << n << " is not a perfect number" << endl;
    }

    return 0;
}
