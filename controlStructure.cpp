#include<iostream>
using namespace std;

int main(){

    // CONTROL STRUCTURES: SEQUENCE, SELECTION, LOOP STRUCTURES ARE THE BASIC CONTROL ONES
    // 1. SEQUENCE STRUCTURES Entry -> Act1-> Act2 -> exit 
    // for example normal codes like hello world
    // 2. SELECTION STRUCTURE Entry ->T ->a1 --> Exit
    //                              ->F ->a2 -
    // for eg -if else, switch case
    // 3. LOOP STRUCTURE Entry -> condition ->t ->loop -> condition.......
    //                                      ->f->exit

    // SWITCH CASE EXAMPLE
    int age;
    cin>>age;
    switch (age)
    {
    case 18:
        cout<<"You are 18";
        break;
    // case age>18 && age<200:
    //     cout<<"You are an adult"<<;
    //     break;
    // case age<18 && age>0:
    //     cout<<"you are a minor";
    //     break;
    
    default:
        cout<<"noob";
        break;
    }

    // cout<<"hello";
    return 0;
}