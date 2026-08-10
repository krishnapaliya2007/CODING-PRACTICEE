#include <bits/stdc++.h>
using namespace std;
double average(int a, int b, int c){
    return (a+b+c)/3;
}
int main (){
    int a,b,c;
    cin>>a>>b>>c;
    double avg=average(a,b,c);
    cout<<avg;
}