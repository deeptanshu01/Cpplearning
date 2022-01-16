#include<iostream>
using namespace std;

float moneyReturn(int p, float r=1.04){ //r =1.04 is the default argument
//also, all default arguments should be in the right most part of the code
    return p*r;
}

int main(){
    int principal,spr;
    cout<<"enter principal\n";
    cin>>principal;
    cout<<"general money return is "<<moneyReturn(principal)<<endl;
    cout<<"but vip return is "<<moneyReturn(principal,1.1)<<endl;

    return 0;
}