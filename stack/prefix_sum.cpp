#include<iostream>
#include<stack>
#include<math.h>
using namespace std;
int evaluate(int a, int b, char op) {
    switch (op) {
        case '+': return a + b;
        case '-': return a - b;
        case '*': return a * b;
        case '/': return b != 0 ? a / b : 0;
        case '^': return pow(a,b);
    }
    return 0;
}
int prefixEval(string s){
    stack<int>st;
    for(int i=s.length()-1;i>=0;i--){
        if(isdigit(s[i])){
            st.push(s[i]-'0');
        }else{
            int a = st.top();
            st.pop();
            int b = st.top();
            st.pop();
            int result = evaluate(a,b,s[i]);
            st.push(result);
        }
    }
    return st.top();
}
int postfixEval(string s){
    stack<int>st;
    for(int i=0;i<s.length();i++){
        if(isdigit(s[i])){
            st.push(s[i]-'0');
        }else{
            int b = st.top();
            st.pop();
            int a = st.top();
            st.pop();
            int result = evaluate(a,b,s[i]);
            st.push(result);
        }
    }
    return st.top();
}
int main(){
    string s = "+7-*123";
    cout<<prefixEval(s)<<endl;
    string s1 = "712*+3-";
    cout<<postfixEval(s1)<<endl;
}