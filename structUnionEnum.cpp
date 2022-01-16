#include<iostream>
using namespace std;

int main(){
    struct employee
    {
        int id;
        char favchar;
        float salary;
    };

    struct employee dp;
    dp.id = 16;
    dp.favchar = 'd';
    dp.salary = 100.12;
    cout<<dp.id<<endl;    
    cout<<dp.favchar<<endl;    
    cout<<dp.salary<<endl;    

    return 0;
}