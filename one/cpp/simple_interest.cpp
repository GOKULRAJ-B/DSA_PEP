#include<iostream>
using namespace std;
int main(){
    int interest;
    int amount;
    cin>>amount>>interest;
    int tax = 0.2;
    if(interest>50){
        cout<<"Amount with tax: "<<(amount + amount*(interest/100) + amount*tax);
    }
    else{
        cout<<"Amount without tax: "<<(amount + amount*(interest/100));
    }
}