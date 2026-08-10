#include <bits/stdc++.h>
using namespace std;

void greet(string n) {
    cout << "Good morning " << n;
}

int main() {
    string n;

    cout << "Enter your name: ";
    cin >> n;

    greet(n);
}