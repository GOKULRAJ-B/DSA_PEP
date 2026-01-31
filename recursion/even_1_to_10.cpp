
#include<iostream>
using namespace std;

void re(int n){
    if(n<=0) return;
    re(n-1);
    if(n%2==0) cout<<n<<endl;
}

int main(){
    re(10);
}