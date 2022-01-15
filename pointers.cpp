#include<iostream>
using namespace std;

int main(){
    // pointer are a data type which hod the address of other data types
    int a=3;
    int * b=&a;
    cout<<b<<endl;
    cout<<*b<<endl;
    cout<<&a<<endl;
    // & -> address of operator
    // * -> dereferencing operator

    return 0;
}