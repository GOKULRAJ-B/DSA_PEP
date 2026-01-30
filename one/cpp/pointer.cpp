#include <iostream>
using namespace std;
int main(){
    int var = 10;
    int *ptr = &var;
    *ptr = *ptr+1;
    cout<<*ptr<<endl;
    cout<<var;
}