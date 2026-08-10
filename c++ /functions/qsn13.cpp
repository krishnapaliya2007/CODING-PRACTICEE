#include <bits/stdc++.h>
using namespace std;

int sumOfDigits(int n) {
    int sum = 0;

    while (n > 0) {
        int digit = n % 10;
        sum = sum + digit;
        n = n / 10;
    }

    return sum;
}

int main() {
    int n;
    cin >> n;

    int result = sumOfDigits(n);

    cout << result;
}