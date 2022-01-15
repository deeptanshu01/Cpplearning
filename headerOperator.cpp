#include<iostream>
#include<cmath>
#include"this.h"
using namespace std;

int main(){

    cout<<"Operators"<<endl<<"hello ";
    int a= 3;
    int p= 3;
    int b=a++;
    int c=++p;
    cout<<b<<" "<<c; 

    cout<<"\n comparsion operators \n";
    cout<<(a==p)<<endl;
    cout<<(a!=p);

    return 0;
}

// Types of header files
// 1. System header files
// Eg. #include<iostream>
// 2. User defined header files
// #include"this.h"
//  https://en.cppreference.com/w/cpp/header


// operators

// arithematic operators
// increment operator ++a, a++
// decrement operator --a, a--
// Post vs pre incre/decrement operator: Pre takes precedence above "=" sign and post takes after (eg in code)

// Assignment operators: used to assign values to variables

// comparison operators
// ==, !=, >=,<=, >, <

// Logical Operators
// &&(and)
// ||(or)
// !(not)


