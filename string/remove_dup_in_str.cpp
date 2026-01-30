#include <iostream>
#include <vector>
using namespace std;
int main(){
    string str = "banana";
    vector<bool> occur(256,false);
    string str1 = "";
    for(char i : str){
        int a = (int)i;
        if(!occur[a]){
            occur[a]=true;
            str1.push_back(i);
        }
    }
    cout<<str1;
}