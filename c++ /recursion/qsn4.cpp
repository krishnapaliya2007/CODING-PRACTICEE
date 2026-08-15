	// Find the sum of first N natural numbers
#include <bits/stdc++.h>
using namespace std;
int sum (int n) {
    if (n==1) return 1;
    return n + sum(n-1);
}
int main() {
    int n;
    cout<<"enter n: ";
    cin>>n;
    cout<<sum(n);
}
