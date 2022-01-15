#include<iostream>
using namespace std;

int main(){

    for (int i = 0; i <= 4; i++)
    {
        if(i==2){
            break;
            // breaks out of the loop
        }
        cout<<i<<endl;
        
    }
    for (int i = 0; i <=4; i++)
    {
        if(i==2){
            continue;
            //continue skips the current iteration
        }
        cout<<i<<endl;
        
    }
    

    return 0;
}