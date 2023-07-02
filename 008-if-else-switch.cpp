#include<iostream>

using namespace std;

int main(){
    // 1. Selection control structure: if else ladder
    cout<<"Tell me your age."<<endl;
    int age;
    cin>>age;
    if(age<18){
        cout<<"You cannot drive";
    }
    else if (age==18){
        cout<<"You can learn how to drive.";
    }
    else{     
        cout<<"You can drive.";
    }

    // 2. Selection control structure: switch case statements
    // int age;
    // cout<<"Tell me your age."<<endl;
    // cin>>age;
    // switch(age)
    // {
    // case 18:
    //     cout<<"You are 18."<<endl;
    //     break;
    // case 22: 
    //     cout<<"You are 22."<<endl;
    //     break;
    // case 51:
    //     cout<<"You are 51."<<endl;
    //     break;
    // default:
    //     cout<<"No special cases."<<endl;
    //     break;
    // }
    // cout<<"Done with switch case.";
    
    return 0;


}