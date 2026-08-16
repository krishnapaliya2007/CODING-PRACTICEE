// Find the minimum element
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;

    cout << "Enter the number of elements: "<<endl;
    cin >> n;

    int arr[n];

    cout << "Enter the elements: "<<endl;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int min = arr[0];
    for (int i = 0; i < n; i++) {
        if (arr[i]<min) {
        min=arr[i];
    }
    }
    cout<<min;
    

}
