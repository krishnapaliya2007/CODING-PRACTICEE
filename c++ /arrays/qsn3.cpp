// Find the average of array elements
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
int sum=0;
 for (int i = 0; i < n; i++) {
     sum+=arr[i];
 }
cout<<"avg:"<< float(sum/n);
}
