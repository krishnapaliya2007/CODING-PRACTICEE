#include <bits/stdc++.h>
using namespace std;
int absoluteValue(int n){
    if (n<0) {
        return (n*(-1));
    }
    else {
        return n;
    }
}
int main() {
    int n;
    cin>>n;
    int result = absoluteValue(n);
    cout<<result;

}