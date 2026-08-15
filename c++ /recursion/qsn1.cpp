	// Print numbers 1 to N
#include <bits/stdc++.h>
using namespace std;

void print (int x,int n) {
    if (x>n) return;
    cout<<x<<endl;
    print(x+1,n);
}

int main() {
    int n;
    cout<<"enter n:"<<endl;
    cin>>n;
    print(1,n);
    

}
