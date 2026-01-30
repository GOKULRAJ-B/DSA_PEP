#include <iostream>
using namespace std;
void hello(){
    cout<<"Hello"<<endl;
}
int add(int a,int b){
    return a+b;
}
float sub(float a,float b){
    return a-b;
}
int main(){
    hello();
    cout<<add(2,4)<<endl;
    cout<<sub(3.1,2.22)<<endl;
}