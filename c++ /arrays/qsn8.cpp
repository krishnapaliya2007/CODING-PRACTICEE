// Count occurrences
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;

    cout << "Enter the number of elements: "<<endl;
    cin >> n;

    int arr[n];
    int count=0;
    int m;

    cout << "Enter the elements: "<<endl;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cin>>m;
    for (int i = 0; i < n; i++) {
        if (arr[i]==m){
        count++ ;
        }
}
cout<<"count:"<<count;
}
