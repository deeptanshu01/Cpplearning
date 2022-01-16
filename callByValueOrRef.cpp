#include<iostream>
using namespace std;
int sum(int a, int b){
    int c = a+b;
    return c;
}
void swap(int a, int b){
    int temp=a;
    a=b;
    b=temp;
}
void swapPointer(int* a, int* b){ //this is an example of call by reference
    int temp=*a;
    *a=*b;
    *b=temp;
}
void swapRefVar(int &a, int &b){ //this is an example of call by reference by reference variable
    int temp=a;
    a=b;
    b=temp;
}

int main(){
    int x,y;
    cin>>x>>y;
    cout<<sum(x,y)<<endl;// this is an example of call by value
    // cout<<x<<" "<<y<<endl;
    // swapPointer(&x,&y);
    // cout<<x<<" "<<y<<endl;
    swapRefVar(x,y);
    cout<<x<<" "<<y<<endl;

    return 0;
}