#include<iostream>
using namespace std;
int sum(int a, int b) //this is called function prototyping 
                        //type function-name(inputs)

int main(){
    int x,y;
    // X AND Y ARE THE ACTUAL PARAMETERS(PARAMETERS THAT ARE ACTUALLY USED IN THE FUNCTION)
    cin>>x>>y;
    cout<<sum(x,y);

    return 0;
}


int sum(int a, int b){
    // A AND B ARE FORMAL PARAMETER(PARAMETERS THAT ARE USED IN THE FUNCTION)
    int c=a+b;
    return c;
}

