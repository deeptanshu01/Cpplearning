#include<iostream>
using namespace std;
inline int product(int a, int b){
    return a*b;//use inline for small functions to make them faster
}
int staticProduct(int a, int b){
    static int c=0;
    c=c+1;
    return a*b+c;
}
int main(){
    int x,y;
    cin>>x>>y;
    cout<<product(x,y)<<endl;
    cout<<staticProduct(x,y)<<endl;
    cout<<staticProduct(x,y)<<endl;
    cout<<staticProduct(x,y)<<endl;
    cout<<staticProduct(x,y)<<endl;
    cout<<staticProduct(x,y)<<endl;
    cout<<staticProduct(x,y)<<endl;
    cout<<staticProduct(x,y)<<endl;
    cout<<staticProduct(x,y)<<endl;
    cout<<staticProduct(x,y)<<endl;
    cout<<staticProduct(x,y)<<endl;
    cout<<staticProduct(x,y)<<endl;
    cout<<staticProduct(x,y)<<endl;
    cout<<staticProduct(x,y)<<endl;
    cout<<staticProduct(x,y)<<endl;
    cout<<staticProduct(x,y)<<endl;
    cout<<staticProduct(x,y)<<endl;
    cout<<staticProduct(x,y)<<endl;
    cout<<staticProduct(x,y)<<endl;
    cout<<staticProduct(x,y)<<endl;
    cout<<staticProduct(x,y)<<endl;
    cout<<staticProduct(x,y)<<endl;
    cout<<staticProduct(x,y)<<endl;
    cout<<staticProduct(x,y)<<endl;
    cout<<staticProduct(x,y)<<endl;

    return 0;
}