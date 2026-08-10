#include <bits/stdc++.h>
using namespace std;
int square(int n){
    return n*n;
}
int cube(int n) {
    return n*n*n;
}
int main() {
    int n;
    cin>>n;
    int sqr=square(n);
    cout<<sqr<<endl;
    int cb= cube(n);
    cout<<cb;

}