#include<iostream>
using namespace std;

int fact(int a){
    if(a<=1){
        return 1;
    }
    else{
        return a*fact(a-1);
    }
}
int fib(int n){
    if(n<2){
        return 1;
    }
    else{
    return fib(n-2)+fib(n-1);
    }
}

int main(){
    int x;
    cin>>x;
    cout<<fact(x)<<endl;
    cout<<fib(x)<<endl;

    return 0;
}