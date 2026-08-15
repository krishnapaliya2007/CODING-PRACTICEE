	// Print "Hello" N times
#include <bits/stdc++.h>
using namespace std;

void print (int n) {
    if (1>n) return;
    cout<<"hello"<<endl;
    print(n-1);
}

int main() {
    int n;
    cout<<"enter n:"<<endl;
    cin>>n;
    print(n);
    

}
