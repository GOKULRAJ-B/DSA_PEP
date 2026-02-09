#include<iostream>
#include<string>
#include<stack>
using namespace std;

int main(){
    string s = "Hi Hello";
    string s1="";
    stack <string> st;
    for(int i=0;i<s.length();i++){
        if(s[i] ==' ' && s1.length() > 0){
            st.push(s1);
            s1 = "";
        }
        else{
            s1 = s1+s[i];
        }
    }
    if(s1.length()>0) st.push(s1);
    while(!st.empty()){
        cout<<st.top()<<" ";
        st.pop();
    }
    cout<<endl;
    stack<char>st1;
    for(char c : s){
        st1.push(c);
    }
    while(!st1.empty()){
        cout<<st1.top();
        st1.pop();
    }

}