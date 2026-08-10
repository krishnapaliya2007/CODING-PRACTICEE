#include <bits/stdc++.h>
using namespace std;

int add(int a, int b) {
    return a + b;
}

int subtract(int a, int b) {
    return a - b;
}

int multiply(int a, int b) {
    return a * b;
}

double divide(int a, int b) {
    return (double)a / b;
}

int main() {
    int a, b;

    cin >> a >> b;

    int addition = add(a, b);
    int subtraction = subtract(a, b);
    int multiplication = multiply(a, b);
    double division = divide(a, b);

    cout << "Addition = " << addition << endl;
    cout << "Subtraction = " << subtraction << endl;
    cout << "Multiplication = " << multiplication << endl;
    cout << "Division = " << division << endl;
}