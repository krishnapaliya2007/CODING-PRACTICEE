// Take an array as input and print all elements
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;

    cout << "Enter the number of elements: ";
    cin >> n;

    int arr[n];

    cout << "Enter the elements: ";

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cout << "The elements are:" << endl;
for (int i = 0; i < n; i++) {
        cout << arr[i] << endl;
    }

}
