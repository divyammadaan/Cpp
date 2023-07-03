   #include<iostream>
using namespace std;

int main(){
    //Array Example
    int marks[] = {49,23,75,90};
    cout<<"These are marks"<<endl;
    marks[2]=89; //You can change the value of an array
    // cout<<marks[0]<<endl;
    // cout<<marks[1]<<endl;
    // cout<<marks[2]<<endl;
    // cout<<marks[3]<<endl;

    // int mathMarks[4];
    // mathMarks[0] = 2278;
    // mathMarks[1] = 342;
    // mathMarks[2] = 54;
    // mathMarks[3] = 7;
    // cout<<"These are mathMarks"<<endl;
    // cout<<mathMarks[0]<<endl;
    // cout<<mathMarks[1]<<endl;
    // cout<<mathMarks[2]<<endl;
    // cout<<mathMarks[3]<<endl;

    // for(int i=0;i<4;i++)
    // {
    //     cout<<"The value of marks "<<i<<" is "<<marks[i]<<endl;
    // }

    // Quick quick: do the same using while and do-while loops
    // int i;
    // while(int i<4)
    // {
    //     cout<<i<<marks[i]<<endl;
    //     i++;
    // }

    // Pointers and arrays
    int* p = marks;
    cout<<*(p++)<<endl;
    cout<<*(++p)<<endl;
    // cout<<"The value of marks[0] is "<<*p<<endl;
    // cout<<"The value of marks[1] is "<<*(p+1)<<endl;
    // cout<<"The value of marks[2] is "<<*(p+2)<<endl;
    // cout<<"The value of marks[3] is "<<*(p+3)<<endl;
    return 0;
}