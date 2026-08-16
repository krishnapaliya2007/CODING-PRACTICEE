// Count even and odd number
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;

    cout << "Enter the number of elements: "<<endl;
    cin >> n;

    int arr[n];
    int count_even=0;
    int count_odd=0;

    cout << "Enter the elements: "<<endl;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    for (int i = 0; i < n; i++) {
        if (arr[i]%2==0) {
            // cout<<"even"<<endl;
            count_even++ ;
        }
        else {
            // cout<<"odd"<<endl;
            count_odd++ ;
        }
    }
        cout<<"even:"<<count_even<<endl;
        cout<<"odd:"<<count_odd<<endl;

}
