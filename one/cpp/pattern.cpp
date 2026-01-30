#include <iostream>
using namespace std;
int main(){
    char c = '*';
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            if(i==0 || i==4){
                cout<<c;
            }
            else if(j==0 || j==4){
                cout<<c;
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;

    }
}