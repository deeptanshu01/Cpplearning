#include<iostream>
#include<iomanip>
using namespace std;

int main(){
// constant in c++
const int a=7;
const int b=1414;
const int c=212121;
// a=3; [THIS IS NOT ALLOWED]

// MANIPULATORS IN C++: Operators which HELP to make code look better
// for eg endl, 
cout<<a<<endl;
cout<<b<<endl;
cout<<c<<endl;
cout<<setw(6)<<a<<endl;
cout<<setw(6)<<b<<endl;
cout<<setw(6)<<c<<endl; //setw begins the code from rhs

// Operator Precedence;



return 0;
}