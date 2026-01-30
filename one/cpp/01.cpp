#include<iostream>
using namespace std;
int main(){
    int age=10;
    cout<<"int: "<<age<<endl;
    int a=5;
    int b=10;
    cout<<"pre and post increment: "<<a++ + ++b<<endl;

    cout<<"relational: "<<(10==5)<<endl;

    //logical
    bool hasID = true;

    if(age>=1 && hasID){
        cout<<"True using AND"<<endl;
    }

    
}