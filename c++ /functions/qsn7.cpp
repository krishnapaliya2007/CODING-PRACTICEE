#include <bits/stdc++.h>
using namespace std;
int maximum(int a, int b){
    if (a>b) {
        return a;
    }
    else {
        return b;
    } 
}
int main(){
    int a;
    int b;
    cin>>a>>b;
    int result = maximum(a,b);
    cout << result;
}