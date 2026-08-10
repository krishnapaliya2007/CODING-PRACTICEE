#include <bits/stdc++.h>
using namespace std;
void introduce(string name, int age){
    cout<<"my name is"<<name<<"and i am"<<age<<"yrs old";
}
int main(){
    string name;
    int age;
    cout<<"enter your name:";
    cin>>name;
    cout<<"enter your age:";
    cin>>age;
    introduce(name,age);
}