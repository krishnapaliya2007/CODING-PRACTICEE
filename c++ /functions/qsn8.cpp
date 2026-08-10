#include <bits/stdc++.h>
using namespace std;
string checkNumber(int n){
    if (n>0) {
        return "positive";
    }
    else if (n==0) {
        return "zero";
    }
    else {
        return "negative";
    }
}
 int main(){
    int n;
    cin>>n;
    string result=checkNumber(n);
    cout<< result;   
    }