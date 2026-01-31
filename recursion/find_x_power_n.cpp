#include <iostream>
using namespace std;

int re(int x,int n){
    if(n==1) return x;
    return x*re(x,n-1);
}

int main(){
    cout<<re(3,3);
}